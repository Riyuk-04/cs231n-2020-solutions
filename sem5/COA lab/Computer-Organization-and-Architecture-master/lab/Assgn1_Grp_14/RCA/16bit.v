`include "8bit.v"								// Importing 8 bit Ripple carry adder module

module rca16(a,b,c0,c,s);						//  Defining Module
    input [15:0]a,b;							//	2 16-bit numbers input
    input c0;									//  Initial carry input
    output c;									//  1-bit carry output
    output [15:0] s;							//  16-bit sum output
    wire temp_carry;							//	Temperory carry wire
    rca8 A1(.a(a[7:0]),.b(b[7:0]),.c0(c0),.c(temp_carry),.s(s[7:0]));					//	Implementing 1st 8-bit ripple carry adders and the sum is stored in s[7:0] and the carry in temp_carry
    rca8 A2(.a(a[15:8]),.b(b[15:8]),.c0(temp_carry),.c(c),.s(s[15:8]));					//	Implementing 2nd 8-bit ripple carry adders and the sum is stored in s[15:8] and the carry in c

endmodule																				//	Final sum is s[15:0] and the carry is in c