load DMux4Way.hdl,
output-file DMux4Way.out,
compare-to DMux4Way.cmp,
output-list ip1%B2.1.2 s%B2.2.2 out1%B2.1.2 out2%B2.1.2 out3%B2.1.2 out4%B2.1.2;

set ip1 0,
set s %B00,
eval,
output;

set s %B01,
eval,
output;

set s %B10,
eval,
output;

set s %B11,
eval,
output;

set ip1 1,
set s %B00,
eval,
output;

set s %B01,
eval,
output;

set s %B10,
eval,
output;

set s %B11,
eval,
output;