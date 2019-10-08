load Mux8Way16.hdl,
output-file Mux8Way16.out,
compare-to Mux8Way16.cmp,
output-list ip1%B1.16.1 ip2%B1.16.1 ip3%B1.16.1 ip4%B1.16.1 ip5%B1.16.1 ip6%B1.16.1 ip7%B1.16.1 ip8%B1.16.1 s%B2.3.2 out%B1.16.1;

set ip1 0,
set ip2 0,
set ip3 0,
set ip4 0,
set ip5 0,
set ip6 0,
set ip7 0,
set ip8 0,
set s 0,
eval,
output;

set s 1,
eval,
output;

set s 2,
eval,
output;

set s 3,
eval,
output;

set s 4,
eval,
output;

set s 5,
eval,
output;

set s 6,
eval,
output;

set s 7,
eval,
output;

set ip1 %B0001001000110100,
set ip2 %B0010001101000101,
set ip3 %B0011010001010110,
set ip4 %B0100010101100111,
set ip5 %B0101011001111000,
set ip6 %B0110011110001001,
set ip7 %B0111100010011010,
set ip8 %B1000100110101011,
set s 0,
eval,
output;

set s 1,
eval,
output;

set s 2,
eval,
output;

set s 3,
eval,
output;

set s 4,
eval,
output;

set s 5,
eval,
output;

set s 6,
eval,
output;

set s 7,
eval,
output;