load Not8.hdl,
output-file Not8.out,
compare-to Not8.cmp,
output-list ip1%B1.8.1 out%B1.8.1;

set ip1 %B00000000,
eval,
output;

set ip1 %B11111111,
eval,
output;

set ip1 %B10101010,
eval,
output;

set ip1 %B00111100,
eval,
output;

set ip1 %B00010010,
eval,
output;