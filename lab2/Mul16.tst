load Mul16.hdl,
output-file Mul16.out,
compare-to Mul16.cmp,
output-list ip1%B1.16.1 ip2%B1.16.1 out%B1.16.1;

set ip1 %B0000000000000010,
set ip2 %B1111111111111101,
eval,
output;

set ip1 %B1111111111111101,
set ip2 %B1111111111111100,
eval,
output;

set ip1 %B0000000000000011,
set ip2 %B0000000000000101,
eval,
output;

set ip1 %B0000000000000100,
set ip2 %B1111111111111110,
eval,
output;