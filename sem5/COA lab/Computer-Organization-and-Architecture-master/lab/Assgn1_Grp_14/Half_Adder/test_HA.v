`include "HA.v"					// Importing Half Adder module

module test_bench;
    reg a,b;					 // Declaring regs and wires
    wire c,s;
    reg expected_s,expected_c;		// Declaring expected_s and expected_c as reg

    half_adder test(.a(a),.b(b),.c(c),.s(s));		// Instantiating an object of the half_adder module
    initial									
        begin										// Begining test cases with a delay of 10 (correct values of s and c are in expected_s and expected_c)
            a=0;b=0;expected_s=0;expected_c=0;
            #10 a=1;b=0;expected_s=1;expected_c=0;
            #10 a=0;b=1;expected_s=1;expected_c=0;
            #10 a=1;b=1;expected_s=0;expected_c=1;
        end
    initial
        $monitor("a=%b b=%b \t c=%b s=%b \t expected c=%b expected s=%b \t time=%0d",a,b,c,s,expected_c,expected_s,$time);		// Monitor for showing the output by the half adder
endmodule



