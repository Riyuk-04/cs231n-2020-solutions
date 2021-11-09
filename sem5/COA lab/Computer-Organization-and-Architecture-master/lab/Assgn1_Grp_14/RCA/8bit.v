`include "../Full_Adder/FA.v"               // Importing Full Adder module

module rca8(a,b,c0,s,c);                    //  Defining Module
    input  [7:0] a,b;                       //  2 8-bit numbers input
    input c0;                               //  Initial carry input
    output  [7:0] s;                        //  8-bit sum output
    output c;                               //  1-bit carry output
    wire [6:0] temp_carry;                  //  7 wires
    full_adder f1(.s(s[0]),.c(temp_carry[0]),.a(a[0]),.b(b[0]),.c0(c0));                            //  Implementing the full adder 8 times and storing the sum in s[i] and the carry in temp_carry[i]
    full_adder f2(.s(s[1]),.c(temp_carry[1]),.a(a[1]),.b(b[1]),.c0(temp_carry[0]));
    full_adder f3(.s(s[2]),.c(temp_carry[2]),.a(a[2]),.b(b[2]),.c0(temp_carry[1]));
    full_adder f4(.s(s[3]),.c(temp_carry[3]),.a(a[3]),.b(b[3]),.c0(temp_carry[2]));
    full_adder f5(.s(s[4]),.c(temp_carry[4]),.a(a[4]),.b(b[4]),.c0(temp_carry[3]));
    full_adder f6(.s(s[5]),.c(temp_carry[5]),.a(a[5]),.b(b[5]),.c0(temp_carry[4]));
    full_adder f7(.s(s[6]),.c(temp_carry[6]),.a(a[6]),.b(b[6]),.c0(temp_carry[5]));
    full_adder f8(.s(s[7]),.c(c),.a(a[7]),.b(b[7]),.c0(temp_carry[6]));

    
endmodule