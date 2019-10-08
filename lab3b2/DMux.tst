load DMux.hdl,
output-file DMux.out,
compare-to DMux.cmp,
output-list ip1%B3.1.3 s%B3.1.3 out1%B3.1.3 out2%B3.1.3;

set ip1 0,
set s 0,
eval,
output;

set ip1 0,
set s 1,
eval,
output;

set ip1 1,
set s 0,
eval,
output;

set ip1 1,
set s 1,
eval,
output;