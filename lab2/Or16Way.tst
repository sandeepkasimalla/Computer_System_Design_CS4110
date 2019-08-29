load Or16Way.hdl,
output-file Or16Way.out,
compare-to Or16Way.cmp,
output-list ip1%B2.16.2 out%B2.1.2;

set ip1 %B0000000000000000, 
eval,
output;

set ip1 %B1111111111111111,  
eval,
output;

set ip1 %B0001000000000000,  
eval,
output;

set ip1 %B0000000100000000,  
eval,