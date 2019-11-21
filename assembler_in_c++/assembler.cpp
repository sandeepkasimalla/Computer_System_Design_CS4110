#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>
#include<vector>
#include<algorithm>
#include"assembler.h"
using namespace std;


vector<string> label;
vector<int> label_loc;

struct variable{
	string name;
	int loc;
};

vector<variable> variable_table;
struct variable tmp;

int variable_location(string line){
	int len = variable_table.size();
	if(len != 0){
		for(int i=0; i<len; i++){
			if(variable_table[i].name == line) return variable_table[i].loc;
		}
	}
	return -1;
}

string removespace(string str){
	string::iterator end_pos = remove(str.begin(), str.end(), ' ');
	str.erase(end_pos, str.end());
 	end_pos = remove(str.begin(), str.end(), '\t');
	str.erase(end_pos, str.end());
	return str;
}

int islabel(string line){
	int len = label.size();
	for(int i=0; i<len; i++){
		if(line == label[i])
			return label_loc[i];
	}
	return -1;
}

string decode_dest(string str_dest){
	int len = dest_table.size();
	if(str_dest == "")
		str_dest = "NULL";
	for(int i=0; i<len; i++){
		if(dest_table[i].inst == str_dest)
			return dest_table[i].code;
	}
	string str = "false";
	return str;
}

string decode_jmp(string str_jmp){
	int len = jmp_table.size();

	if(str_jmp == "")
		str_jmp = "NULL";
	for(int i=0; i<len; i++){
		if(jmp_table[i].inst == str_jmp)
			return jmp_table[i].code;
	}
	string str = "false";
	return str;
}

string decode_comp(string str_comp){
	int len = comp_table.size();
	for(int i=0; i<len; i++){
		if(comp_table[i].inst == str_comp){
			string str = comp_table[i].type + comp_table[i].code ;
			return str;
		}
	}
	string str = "false";
	return str;
}


string int_to_binary(int n){

	if(n==0){
      string binary;
      for(int i=0; i<15 ; i++)
        binary.push_back('0');
	  return binary;
    }
  	else{
	int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
	string binary;
	for(int k=0; k<15-i; k++)
		binary.push_back('0');
    for (int j = i - 1; j >= 0; j--)
        binary.push_back(binaryNum[j]+'0');
	return binary;
}
}

int issymbol(string str){
	int len = sym_table.size();
	for(int i =0; i<len; i++){
		if(str == sym_table[i].symbol)
			return sym_table[i].loc;
	}
	return -1;
}

bool isNumber(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i]) == false)
            return false;
  }
    return true;
}

void convert_into_binary(ifstream &f, string file){
	string line;
	int line_num = 0;
	int location = 16;
	string file_name = file + ".hack";
	ofstream myfile;
	myfile.open (file_name);
	while(getline(f, line)){
		int type ;
		int line_len = line.length();
		string binary = "";
		if(line_len != 0 && line[0] != '/' && line[1] != '/'){
			if(line[0] == '@' ){
				line = line.substr(1, line_len);
				string A = "0";
				binary.append(A);

				if (isNumber(line)){
					int value = stoi(line);
					binary.append(int_to_binary(value));
				}
				else{
					int sym_loc = issymbol(line);
					int lab_loc = islabel(line);
					if(lab_loc != -1)
						binary.append(int_to_binary(lab_loc));

					else if( sym_loc != -1 ){
						binary.append(int_to_binary(sym_loc));
					}
					else{
						int var_loc = variable_location(line);
						if(var_loc != -1){
							binary.append(int_to_binary(var_loc));
						}
						else{
							tmp.name = line;
							tmp.loc = location;
							variable_table.push_back(tmp);
							binary.append(int_to_binary(location));
							location++;
						}
					}
				}
				//cout<<binary<<endl;
				myfile <<binary<<"\n";
			}
			else{
				string C = "111";
				binary.append(C);
				string str_temp="",str_dest="", str_comp="", str_jmp="";
				int flag =0;
				for(int i=0; i<line_len; i++){
					if(line[i]==' ') continue;
					if(line[i] == '=' || line[i] == ';'){
						flag = 1;
						if(line[i] == '='){
							str_dest = str_temp;
							str_temp = "";
						}
						else{
							str_comp = str_temp;
							str_temp = "";
						}

					}
					else
						str_temp.push_back(line[i]);

				}
				if(flag == 1){
				if(str_dest==""){
					str_jmp = str_temp;
				}
				else{
					str_comp = str_temp;
				}
				str_dest = decode_dest(str_dest);
				str_comp = decode_comp(str_comp);
				str_jmp = decode_jmp(str_jmp);
				if(str_comp != "false")
					binary.append(str_comp);
				else{
					cout<<"Error : comp  \n   dest = comp ; jmp "<<endl;
					//exit(1);
				}
				if(str_dest != "false")
					binary.append(str_dest);
				else{
					cout<<"Error : dest  \n   dest = comp ; jmp "<<endl;
					//exit(1);
				}
				if(str_jmp != "false")
					binary.append(str_jmp);
				else{
					cout<<"Error : jmp  \n   dest = comp ; jmp "<<endl;
					//exit(1);
				}

				//cout<<binary<<endl;
				myfile <<binary<<"\n";
				}
			}
		}
	}
    myfile.close();
}


void file_modification(ifstream &f, string file){
	string file_name = file + ".ir";
	ofstream myfile;
	myfile.open (file_name);
	int line_num = 0;
	int waste = 0;
	string line;
	while(getline(f, line)){
		int type ;
		//int line_len = line.length();
		int loc = 0 ;
		string str_temp="";
	 	line = removespace(line);
		//cout<<line<<endl;
		int line_len = line.length();
		if(line_len == 0){
			waste++;
		}
		else if(line[0] == '/' && line[1] == '/'){
			waste++;
		}
		else if(line[0] == '@'){
			myfile <<line<<"\n";
		}
		else{
			int flag =0;
			for(int i=0; i<line_len; i++){
				if(line[i]==' ') continue;
				if(line[i] == '=' || line[i] == ';'){
					flag = 1;
				}
				else
					str_temp.push_back(line[i]);
			}
			if(flag == 1) myfile <<line<<"\n";
			else{
				//cout<<str_temp<<endl;
				string name = str_temp.substr(1, line_len-2);
				loc = line_num - waste;
				label.push_back(name);
				label_loc.push_back(loc);
				waste++;
			}
		}
		line_num++;
	}
	myfile.close();
}



int main(int argc, char *argv[]){
	if(argc!=2){
		cout<<"usage: assembler [file_name]"<<endl;
		return 1;
	}

	create_tables();
	ifstream f;
	f.open(argv[1]);
	string file_name = argv[1];
	int len = file_name.length();
	string file;
	for(int i=0; i<len; i++){
		if(file_name[i] != '.')
			file.push_back(file_name[i]);
		else
			break;
	}
	file_modification(f,file);
	f.close();
	string ir_file = file + ".ir";
	f.open(ir_file);
	convert_into_binary(f, file);
	cout<<"output file will be in current folder with name same as inputfile with .hack extension !"<<endl;
	f.close();
	return 0;
}
