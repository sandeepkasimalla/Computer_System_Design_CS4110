load ShiftLeft.hdl,
output-file ShiftLeft.out,
compare-to ShiftLeft.cmp,
output-list ip1%B1.16.1 out%B1.16.1;

set ip1 %B0000000000000000,
eval,
output;

set ip1 %B0001001000110100,
eval,
output;

set ip1 %B1001100001110110,
eval,
output;

set ip1 %B1010101010101010,
eval,
output;

set ip1 %B0101010101010101,
eval,
output;