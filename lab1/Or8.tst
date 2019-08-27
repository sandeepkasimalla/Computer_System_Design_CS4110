load Or8.hdl,
output-file Or8.out,
compare-to Or8.cmp,
output-list ip1%B1.8.1 ip2%B1.8.1 out%B1.8.1;

set ip1 %B00000000,
set ip2 %B00000000,
eval,
output;

set ip1 %B11111111,
set ip2 %B00000000,
eval,
output;

set ip1 %B11111111,
set ip2 %B11111111,
eval,
output;

set ip1 %B10101010,
set ip2 %B01010101,
eval,
output;

set ip1 %B00111100,
set ip2 %B00001111,
eval,
output;

set ip1 %B00010010,
set ip2 %B10011000,
eval,
output;

