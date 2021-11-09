`include "32bit.v"

module test32;
    reg cin;
    reg [31:0]a,b;
    wire [31:0]s;
    wire c;
    wire [32:0] sf;
    reg [32:0] expected;

    rca32 test(.a(a),.b(b),.c0(cin),.c(c),.s(s));
    assign sf={c,s};

    initial 
        begin
            a=32'b 10101000 ;b=32'b 01000101;cin=0;expected=33'b11101101;
            #10 a=32'd 1234567891; b=32'd 4189534612;cin=0; expected=33'd 5424102503;
        end
    initial 
        $monitor("a=%b=%d b=%b=%d  \t s=%b=%d \texpected sum=%b=%d  \t time=%0d",a,a,b,b,sf,sf,expected,expected,$time);
endmodule
