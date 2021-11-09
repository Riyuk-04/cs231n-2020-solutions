`include "16bit.v"

module test16;
    reg cin;
    reg [15:0]a,b;
    wire [15:0]s;
    wire c;
    wire [16:0] sf;
    reg [16:0] expected;

    rca16 test(.a(a),.b(b),.c0(cin),.c(c),.s(s));
    assign sf={c,s};

    initial 
        begin
            a=16'b 10101000 ;b=16'b 01000101;cin=0;expected=17'b11101101;
            #10 a=16'd 48973; b=16'd 57458;cin=0; expected=17'd 106431;
        end
    initial 
        $monitor("a=%b=%d b=%b=%d  \t s=%b=%d \texpected sum=%b=%d  \t time=%0d",a,a,b,b,sf,sf,expected,expected,$time);
endmodule
