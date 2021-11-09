`include "64bit.v"

module test64;
    reg cin;
    reg [63:0]a,b;
    wire [63:0]s;
    wire c;
    wire [64:0] sf;
    reg [64:0] expected;

    rca64 test(.a(a),.b(b),.c0(cin),.c(c),.s(s));
    assign sf={c,s};

    initial 
        begin
            a=64'b 10101000 ;b=64'b 01000101;cin=0;expected=65'b11101101;
            #10 a=64'd 17324567891123456789; b=64'd 9876543214189534612;cin=0; expected=65'd 27201111105312991401;
        end
    initial 
        $monitor("a=%b=%d b=%b=%d  \t s=%b=%d \texpected sum=%b=%d  \t time=%0d",a,a,b,b,sf,sf,expected,expected,$time);
endmodule
