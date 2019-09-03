// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/03/a/PC.tst

load PC16Bit.hdl,
output-file PC16Bit.out,
compare-to PC16Bit.cmp,
output-list time%S1.4.1 ip1%D1.6.1 reset%B2.1.2 load%B2.1.2 inc%B2.1.2 out%D1.6.1;

set ip1 0,
set reset 0,
set load 0,
set inc 0,
tick,
output;

tock,
output;

set inc 1,
tick,
output;

tock,
output;

set ip1 -32123,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set load 0,
tick,
output;

tock,
output;

tick,
output;

tock,
output;

set ip1 12345,
set load 1,
set inc 0,
tick,
output;

tock,
output;

set reset 1,
tick,
output;

tock,
output;

set reset 0,
set inc 1,
tick,
output;

tock,
output;

set reset 1,
tick,
output;

tock,
output;

set reset 0,
set load 0,
tick,
output;

tock,
output;

set reset 1,
tick,
output;

tock,
output;

set ip1 0,
set reset 0,
set load 1,
tick,
output;

tock,
output;

set load 0,
set inc 1,
tick,
output;

tock,
output;

set ip1 22222,
set reset 1,
set inc 0,
tick,
output;

tock,
output;
