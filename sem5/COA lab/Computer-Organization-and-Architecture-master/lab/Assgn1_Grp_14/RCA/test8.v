`include "8bit.v"                                        // Importing 8 bit Ripple carry adder module

module test8;
    reg cin;                                            //  Declaring regs and wires
    reg [7:0]a,b;
    wire [7:0]s;
    wire c;
    wire [8:0] sf;
    reg [8:0] expected;

    rca8 test(.a(a),.b(b),.c0(cin),.c(c),.s(s));        // Instantiating an object of the 8-bit ripple carry adder module
    assign sf={c,s};                                    // Final 9-bit soutput by concatenating the carry and sum

    initial 
        begin                                                                   // Begining test cases with both binary and decimal numbers and a delay of 10 (correct value is in expected)
            a=8'b 10101000 ;b=8'b 01000101;cin=0;expected=9'b11101101;
            #10 a=8'd 67; b=8'd 104;cin=0; expected=9'd 171;
        end
    initial 
        $monitor("a=%b=%d b=%b=%d  \t s=%b=%d \texpected sum=%b=%d  \t time=%0d",a,a,b,b,sf,sf,expected,expected,$time);            // Monitor for showing the output by the 8-bit ripple carry adder
endmodule