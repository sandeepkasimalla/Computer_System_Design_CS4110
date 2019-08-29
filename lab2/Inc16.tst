load Inc16.hdl,
output-file Inc16.out,
compare-to Inc16.cmp,
output-list ip1%B1.16.1 out%B1.16.1;

set ip1 %B0000000000000000, 
eval,
output;

set ip1 %B1111111111111111,  
eval,
output;

set ip1 %B0000000000000101,  
eval,
output;

set ip1 %B1111111111111011,  
eval,
output;