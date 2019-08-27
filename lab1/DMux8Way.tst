load DMux8Way.hdl,
output-file DMux8Way.out,
compare-to DMux8Way.cmp,
output-list ip1%B2.1.2 s%B2.2.2 out1%B2.1.2 out2%B2.1.2 out3%B2.1.2 out4%B2.1.2 out5%B2.1.2 out6%B2.1.2 out7%B2.1.2 out8%B2.1.2;

set ip1 0,
set s %B000,
eval,
output;

set s %B001,
eval,
output;

set s %B010,
eval,
output;

set s %B011,
eval,
output;

set s %B100,
eval,
output;

set s %B101,
eval,
output;

set s %B110,
eval,
output;

set s %B111,
eval,
output;

set ip1 1,
set s %B000,
eval,
output;

set s %B001,
eval,
output;

set s %B010,
eval,
output;

set s %B011,
eval,
output;

set s %B100,
eval,
output;

set s %B101,
eval,
output;

set s %B110,
eval,
output;

set s %B111,
eval,
output;