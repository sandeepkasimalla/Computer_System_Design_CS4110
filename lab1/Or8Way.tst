load Or8Way.hdl,
output-file Or8Way.out,
compare-to Or8Way.cmp,
output-list ip1%B2.8.2 out%B2.1.2;

set ip1 %B00000000,
eval,
output;

set ip1 %B11111111,
eval,
output;

set ip1 %B00010000,
eval,
output;

set ip1 %B00000001,
eval,
output;

set ip1 %B00100110,
eval,
output;