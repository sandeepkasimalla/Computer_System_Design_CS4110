load FullAdder.hdl,
output-file FullAdder.out,
compare-to FullAdder.cmp,
output-list ip1%B3.1.3 ip2%B3.1.3 ip3%B3.1.3 sum%B3.1.3 carry%B3.1.3;

set ip1 0,
set ip2 0,
set ip3 0,
eval,
output;

set ip3 1,
eval,
output;

set ip2 1,
set ip3 0,
eval,
output;

set ip3 1,
eval,
output;

set ip1 1,
set ip2 0,
set ip3 0,
eval,
output;

set ip3 1,
eval,
output;

set ip2 1,
set ip3 0,
eval,
output;

set ip3 1,
eval,
output;