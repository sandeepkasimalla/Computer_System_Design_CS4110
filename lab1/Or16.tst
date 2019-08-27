load Or16.hdl,
output-file Or16.out,
compare-to Or16.cmp,
output-list ip1%B1.16.1 ip2%B1.16.1 out%B1.16.1;

set ip1 %B0000000000000000,
set ip2 %B0000000000000000,
eval,
output;

set ip1 %B0000000000000000,
set ip2 %B1111111111111111,
eval,
output;

set ip1 %B1111111111111111,
set ip2 %B1111111111111111,
eval,
output;

set ip1 %B1010101010101010,
set ip2 %B0101010101010101,
eval,
output;

set ip1 %B0011110011000011,
set ip2 %B0000111111110000,
eval,
output;

set ip1 %B0001001000110100,
set ip2 %B1001100001110110,
eval,
output;