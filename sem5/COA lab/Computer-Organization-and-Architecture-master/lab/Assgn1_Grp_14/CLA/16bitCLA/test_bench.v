`include "16bitCLA.v"

module test_bench;
    reg [15:0] a,b;
    reg cin;
    
    wire [15:0] s;
    wire [16:0]sf;
    wire C;
    
    cla16 test(.C(C),.s(s),.a(a),.b(b),.cin(cin));
    assign sf={C,s};
    initial 
        begin
            a=16'b 1101010010010101 ;b=16'b 0011101001100101;cin=0;
            #10 a=16'b 1111000001011011;b=16'b 1000000010111101;cin=0; 
            #10 a=16'd 48973; b=16'd 57458;cin=0;
        end
    initial
        $monitor("a=%b=%d b=%b=%d \t a+b=%b=%d \t time=%0d",a,a,b,b,sf,sf,$time);
endmodule