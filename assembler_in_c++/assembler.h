#include<iostream>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>
#include <typeinfo>
#include<string>
#include<vector>
using namespace std;
struct rom_sym{
	string symbol;
	int loc;
};

struct dest{
	string inst;
	string code;
};

struct comp{
	string inst;
	string code;
	string type;
};

struct jmp{
	string inst;
	string code;
};

vector<rom_sym> sym_table; 
 
struct rom_sym temp;

struct dest temp_dest;
vector<dest> dest_table; 

struct jmp temp_jmp;
vector<jmp> jmp_table;

struct comp temp_comp;
vector<comp> comp_table;

void create_tables(){
	temp.symbol = "SP";
	temp.loc = 0;
	sym_table.push_back(temp);
	temp.symbol = "LCL";
	temp.loc = 1;
	sym_table.push_back(temp);
	temp.symbol = "ARG";
	temp.loc = 2;
	sym_table.push_back(temp);
	temp.symbol = "THIS";
	temp.loc = 3;
	sym_table.push_back(temp);
	temp.symbol = "THAT";
	temp.loc = 4;
	sym_table.push_back(temp);
	temp.symbol = "SCREEN";
	temp.loc = 16384;
	sym_table.push_back(temp);
	temp.symbol = "KBD";
	temp.loc = 24576;
	sym_table.push_back(temp);


	temp.symbol = "R0";
	temp.loc = 0;
	sym_table.push_back(temp);
	temp.symbol = "R1";
	temp.loc = 1;
	sym_table.push_back(temp);
	temp.symbol = "R2";
	temp.loc = 2;
	sym_table.push_back(temp);
	temp.symbol = "R3";
	temp.loc = 3;
	sym_table.push_back(temp);
	temp.symbol = "R4";
	temp.loc = 4;
	sym_table.push_back(temp);
	temp.symbol = "R5";
	temp.loc = 5;
	sym_table.push_back(temp);
	temp.symbol = "R6";
	temp.loc = 6;
	sym_table.push_back(temp);
	temp.symbol = "R7";
	temp.loc = 7;
	sym_table.push_back(temp);
	temp.symbol = "R8";
	temp.loc = 8;
	sym_table.push_back(temp);
	temp.symbol = "R9";
	temp.loc = 9;
	sym_table.push_back(temp);
	temp.symbol = "R10";
	temp.loc = 10;
	sym_table.push_back(temp);
	temp.symbol = "R11";
	temp.loc = 11;
	sym_table.push_back(temp);
	temp.symbol = "R12";
	temp.loc = 12;
	sym_table.push_back(temp);
	temp.symbol = "R13";
	temp.loc = 13;
	sym_table.push_back(temp);
	temp.symbol = "R14";
	temp.loc = 14;
	sym_table.push_back(temp);
	temp.symbol = "R15";
	temp.loc = 15;
	sym_table.push_back(temp);





	//initializing dest table
	temp_dest.inst = "NULL";
	temp_dest.code = "000";
	dest_table.push_back(temp_dest);

	temp_dest.inst = "M";
	temp_dest.code = "001";
	dest_table.push_back(temp_dest);

	temp_dest.inst = "D";
	temp_dest.code = "010";
	dest_table.push_back(temp_dest);

	temp_dest.inst = "MD";
	temp_dest.code = "011";
	dest_table.push_back(temp_dest);

	temp_dest.inst = "A";
	temp_dest.code = "100";
	dest_table.push_back(temp_dest);

	temp_dest.inst = "AM";
	temp_dest.code = "101";
	dest_table.push_back(temp_dest);

	temp_dest.inst = "AD";
	temp_dest.code = "110";
	dest_table.push_back(temp_dest);

	temp_dest.inst = "AMD";
	temp_dest.code = "111";
	dest_table.push_back(temp_dest);


	//initializing jmp table
	temp_jmp.inst = "NULL";
	temp_jmp.code = "000";
	jmp_table.push_back(temp_jmp);

	temp_jmp.inst = "null";
	temp_jmp.code = "000";
	jmp_table.push_back(temp_jmp);

	temp_jmp.inst = "JGT";
	temp_jmp.code = "001";
	jmp_table.push_back(temp_jmp);

	temp_jmp.inst = "jgt";
	temp_jmp.code = "001";
	jmp_table.push_back(temp_jmp);

	temp_jmp.inst = "JEQ";
	temp_jmp.code = "010";
	jmp_table.push_back(temp_jmp);

	temp_jmp.inst = "jeq";
	temp_jmp.code = "010";
	jmp_table.push_back(temp_jmp);

	temp_jmp.inst = "JGE";
	temp_jmp.code = "011";
	jmp_table.push_back(temp_jmp);

	temp_jmp.inst = "jge";
	temp_jmp.code = "011";
	jmp_table.push_back(temp_jmp);

	temp_jmp.inst = "JLT";
	temp_jmp.code = "100";
	jmp_table.push_back(temp_jmp);

	temp_jmp.inst = "jlt";
	temp_jmp.code = "100";
	jmp_table.push_back(temp_jmp);

	temp_jmp.inst = "JNE";
	temp_jmp.code = "101";
	jmp_table.push_back(temp_jmp);

	temp_jmp.inst = "jne";
	temp_jmp.code = "101";
	jmp_table.push_back(temp_jmp);

	temp_jmp.inst = "JLE";
	temp_jmp.code = "110";
	jmp_table.push_back(temp_jmp);

	temp_jmp.inst = "jle";
	temp_jmp.code = "110";
	jmp_table.push_back(temp_jmp);

	temp_jmp.inst = "JMP";
	temp_jmp.code = "111";
	jmp_table.push_back(temp_jmp);

	temp_jmp.inst = "jmp";
	temp_jmp.code = "111";
	jmp_table.push_back(temp_jmp);


	//initializing comp table -- a=0
	temp_comp.inst = "0";
	temp_comp.code = "101010";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "1";
	temp_comp.code = "111111";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "-1";
	temp_comp.code = "111010";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "D";
	temp_comp.code = "001100";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "A";
	temp_comp.code = "110000";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "!D";
	temp_comp.code = "001101";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "!A";
	temp_comp.code = "110001";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "-D";
	temp_comp.code = "001111";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "-A";
	temp_comp.code = "110011";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "D+1";
	temp_comp.code = "011111";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "1+D";
	temp_comp.code = "011111";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "A+1";
	temp_comp.code = "110111";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "1+A";
	temp_comp.code = "110111";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "D-1";
	temp_comp.code = "001110";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "A-1";
	temp_comp.code = "110010";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "D+A";
	temp_comp.code = "000010";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "A+D";
	temp_comp.code = "000010";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "D-A";
	temp_comp.code = "010011";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "A-D";
	temp_comp.code = "000111";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "D&A";
	temp_comp.code = "000000";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "A&D";
	temp_comp.code = "000000";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "D|A";
	temp_comp.code = "010101";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "A|D";
	temp_comp.code = "010101";
	temp_comp.type = "0";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "M";
	temp_comp.code = "110000";
	temp_comp.type = "1";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "!M";
	temp_comp.code = "110001";
	temp_comp.type = "1";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "-M";
	temp_comp.code = "110011";
	temp_comp.type = "1";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "M+1";
	temp_comp.code = "110111";
	temp_comp.type = "1";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "1+M";
	temp_comp.code = "110111";
	temp_comp.type = "1";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "M-1";
	temp_comp.code = "110010";
	temp_comp.type = "1";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "D+M";
	temp_comp.code = "000010";
	temp_comp.type = "1";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "M+D";
	temp_comp.code = "000010";
	temp_comp.type = "1";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "D-M";
	temp_comp.code = "010011";
	temp_comp.type = "1";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "M-D";
	temp_comp.code = "000111";
	temp_comp.type = "1";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "D&M";
	temp_comp.code = "000000";
	temp_comp.type = "1";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "M&D";
	temp_comp.code = "000000";
	temp_comp.type = "1";
	comp_table.push_back(temp_comp);

	temp_comp.inst = "D|M";
	temp_comp.code = "010101";
	temp_comp.type = "1" ;
	comp_table.push_back(temp_comp);

	temp_comp.inst = "M|D";
	temp_comp.code = "010101";
	temp_comp.type = "1" ;
	comp_table.push_back(temp_comp);

}

