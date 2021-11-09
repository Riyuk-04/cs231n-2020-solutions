`include "32bit.v"							// Importing 32 bit Ripple carry adder module

module rca64(a,b,c0,c,s);					//  Defining Module
    input [63:0]a,b;						//	2 64-bit numbers input
    input c0;								//  Initial carry input
    output c;								//  1-bit carry outpu
    output [63:0] s;						//  64-bit sum output
    wire temp_carry;						//	Temperory carry wire
    rca32 A1(.a(a[31:0]),.b(b[31:0]),.c0(c0),.c(temp_carry),.s(s[31:0]));						//	Implementing 1st 32-bit ripple carry adders and the sum is stored in s[31:0] and the carry in temp_carry
    rca32 A2(.a(a[63:32]),.b(b[63:32]),.c0(temp_carry),.c(c),.s(s[63:32]));						//	Implementing 2nd 32-bit ripple carry adders and the sum is stored in s[63:32] and the carry in c

endmodule																						//	Final sum is s[63:0] and the carry is in c