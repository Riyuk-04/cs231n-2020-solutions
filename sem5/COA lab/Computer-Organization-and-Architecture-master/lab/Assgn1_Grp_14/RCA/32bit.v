`include "16bit.v"							// Importing 16 bit Ripple carry adder module

module rca32(a,b,c0,c,s);					//  Defining Module
    input [31:0]a,b;						//	2 32-bit numbers input
    input c0;								//  Initial carry input
    output c;								//  1-bit carry output
    output [31:0] s;						//  32-bit sum output
    wire temp_carry;						//	Temperory carry wire
    rca16 A1(.a(a[15:0]),.b(b[15:0]),.c0(c0),.c(temp_carry),.s(s[15:0]));					//	Implementing 1st 16-bit ripple carry adders and the sum is stored in s[15:0] and the carry in temp_carry
    rca16 A2(.a(a[31:16]),.b(b[31:16]),.c0(temp_carry),.c(c),.s(s[31:16]));					//	Implementing 2nd 16-bit ripple carry adders and the sum is stored in s[31:16] and the carry in c

endmodule																					//	Final sum is s[31:0] and the carry is in c