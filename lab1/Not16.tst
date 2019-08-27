load Not16.hdl,
output-file Not16.out,
compare-to Not16.cmp,
output-list ip1%B1.16.1 out%B1.16.1;

set ip1 %B0000000000000000,
eval,
output;

set ip1 %B1111111111111111,
eval,
output;

set ip1 %B1010101010101010,
eval,
output;

set ip1 %B0011110000111100,
eval,
output;

set ip1 %B0001001000110100,
eval,
output;