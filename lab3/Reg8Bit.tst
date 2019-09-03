// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/03/a/Register.tst

load Reg8Bit.hdl,
output-file Reg8Bit.out,
compare-to Reg8Bit.cmp,
output-list time%S1.4.1 ip1%B1.8.1 load%B2.1.2 out%B1.8.1;

set ip1 %B00000000,
set load 0,
tick,
output;

tock,
output;

set ip1 %B00000000,
set load 1,
tick,
output;

tock,
output;