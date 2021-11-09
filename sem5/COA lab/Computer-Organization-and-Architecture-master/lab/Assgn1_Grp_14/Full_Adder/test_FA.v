`include "FA.v"                     // Importing Full Adder module

module test_bench;   
    reg a,b,c0;                    // Declaring regs and wires
    wire c,s;
    reg expected_s,expected_c;

    full_adder test(.a(a),.b(b),.c0(c0),.c(c),.s(s));           // Instantiating an object of the full_adder module
    initial
        begin                                                   // Begining test cases with a delay of 10 (correct values of s and c are in expected_s and expected_c)
            a=0;b=0;c0=0;expected_s=0;expected_c=0;
            #10 a=1;b=0;c0=0;expected_s=1;expected_c=0;
            #10 a=0;b=1;c0=0;expected_s=1;expected_c=0;
            #10 a=1;b=1;c0=0;expected_s=0;expected_c=1;
            #10 a=0;b=0;c0=1;expected_s=1;expected_c=0;
            #10 a=1;b=0;c0=1;expected_s=0;expected_c=1;
            #10 a=0;b=1;c0=1;expected_s=0;expected_c=1;
            #10 a=1;b=1;c0=1;expected_s=1;expected_c=1;
        end
    initial
        $monitor("a=%b b=%b c0=%b \t c=%b s=%b \texpected c=%b expected s=%b \t time=%0d",a,b,c0,c,s,expected_c,expected_s,$time);              // Monitor for showing the output by the full adder
endmodule
