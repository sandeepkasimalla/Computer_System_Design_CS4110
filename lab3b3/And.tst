load And.hdl,
output-file And.out,
compare-to And.cmp,
output-list ip1%B3.1.3 ip2%B3.1.3 out%B3.1.3;

set ip1 0,
set ip2 0,
eval,
output;

set ip1 0,
set ip2 1,
eval,
output;

set ip1 1,
set ip2 0,
eval,
output;

set ip1 1,
set ip2 1,
eval,
output;
