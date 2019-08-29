load Mux16.hdl,
output-file Mux16.out,
compare-to Mux16.cmp,
output-list ip1%B1.16.1 ip2%B1.16.1 s%D2.1.2 out%B1.16.1;

set ip1 0,
set ip2 0,
set s 0,
eval,
output;

set s 1,
eval,
output;

set ip1 %B0000000000000000,
set ip2 %B0001001000110100,
set s 0,
eval,
output;

set s 1,
eval,
output;

set ip1 %B1001100001110110,
set ip2 %B0000000000000000,
set s 0,
eval,
output;

set s 1,
eval,
output;

set ip1 %B1010101010101010,
set ip2 %B0101010101010101,
set s 0,
eval,
output;

set s 1,
eval,
output;
