load Mux4Way16.hdl,
output-file Mux4Way16.out,
compare-to Mux4Way16.cmp,
output-list ip1%B1.16.1 ip2%B1.16.1 ip3%B1.16.1 ip4%B1.16.1 s%B2.2.2 out%B1.16.1;

set ip1 0,
set ip2 0,
set ip3 0,
set ip4 0,
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

set ip1 %B0001001000110100,
set ip2 %B1001100001110110,
set ip3 %B1010101010101010,
set ip4 %B0101010101010101,
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