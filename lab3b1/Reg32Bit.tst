// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/03/a/Register.tst

load Reg32Bit.hdl,
output-file Reg32Bit.out,
compare-to Reg32Bit.cmp,
output-list time%S1.4.1 ip1%D1.6.1 load%B2.1.2 out%D1.6.1;

set ip1 0,
set load 0,
tick,
output;

tock,
output;

set ip1 0,
set load 1,
tick,
output;

tock,
output;

set ip1 -32123,
set load 0,
tick,
output;

tock,
output;

set ip1 11111,
set load 0,
tick,
output;

tock,
output;

set ip1 -32123,
set load 1,
tick,
output;

tock,
output;

set ip1 -32123,
set load 1,
tick,
output;

tock,
output;

set ip1 -32123,
set load 0,
tick,
output;

tock,
output;

set ip1 12345,
set load 1,
tick,
output;

tock,
output;

set ip1 0,
set load 0,
tick,
output;

tock,
output;

set ip1 0,
set load 1,
tick,
output;

tock,
output;

set ip1 %B0000000000000001,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B0000000000000010,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B0000000000000100,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B0000000000001000,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B0000000000010000,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B0000000000100000,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B0000000001000000,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B0000000010000000,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B0000000100000000,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B0000001000000000,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B0000010000000000,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B0000100000000000,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B0001000000000000,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B0010000000000000,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B0100000000000000,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B1000000000000000,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B1111111111111110,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B1111111111111101,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B1111111111111011,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B1111111111110111,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B1111111111101111,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B1111111111011111,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B1111111110111111,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B1111111101111111,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B1111111011111111,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B1111110111111111,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B1111101111111111,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B1111011111111111,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B1110111111111111,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B1101111111111111,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B1011111111111111,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;

set ip1 %B0111111111111111,
set load 0,
tick,
output;

tock,
output;

set load 1,
tick,
output;

tock,
output;
