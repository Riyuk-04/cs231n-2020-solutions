`include "4bitCLA.v"

module test_bench;
    reg [3:0] a,b;
    reg cin;
    wire [3:0] s;
    wire [4:0]sf;
    wire C;
    cla4 test(.C(C),.s(s),.a(a),.b(b),.cin(cin),.G(G),.P(P));
    assign sf={C,s};
    initial 
        begin
            a=4'b1001;b=4'b0101;cin=0;
            #10 a=4'b1011;b=4'b1101;cin=0;
            #10 a=4'b0001;b=4'b0100;cin=0;
            #10 a=4'd 15;b=4'd 7;cin=0;
        end
    initial
        $monitor("a=%b=%d b=%b=%d \t a+b=%b=%d \t time=%0d",a,a,b,b,sf,sf,$time);
endmodule