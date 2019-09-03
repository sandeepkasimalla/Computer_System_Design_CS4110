load Inc8.hdl,
output-file Inc8.out,
compare-to Inc8.cmp,
output-list ip1%B1.8.1 out%B1.8.1;

set ip1 %B00000000, 
eval,
output;

set ip1 %B11111111,  
eval,
output;

set ip1 %B00000101,  
eval,
output;

set ip1 %B11111011,  
eval,
output;