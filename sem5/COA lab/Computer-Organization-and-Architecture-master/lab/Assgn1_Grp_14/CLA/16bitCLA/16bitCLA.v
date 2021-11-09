`include "../4bitCLA/4bitCLA.v"

module LCU(g,p,cin,c,G,P);      //  Lookahead carry unit as mentioned in the design 
    input [3:0] g,p;            //  2 4-bit inputs (generate and propogate)
    input cin;                  //  1-bit carry input
    output  G,P;                //  Output G and P
    output [3:0] c;             //  Output carry

    assign c[0]=g[0] || (p[0]&&cin);
    assign c[1]=g[1] || (g[0]&&p[1]) || (p[0]&&p[1]&&cin);
    assign c[2]=g[2] || (g[1]&&p[2]) || (g[0]&&p[2]&&p[1]) || (p[2]&&p[1]&&p[0]&&cin);
    assign c[3]=g[3] || (g[2]&&p[3]) || (g[1]&&p[3]&&p[2]) || (g[0]&&p[3]&&p[2]&&p[1]) || (p[3]&&p[2]&&p[1]&&p[0]&&cin);

    assign G=g[3] || (g[2]&&p[3]) || (g[1]&&p[3]&&p[2]) || (g[0]&&p[3]&&p[2]&&p[1]);
    assign P=p[3]&&p[2]&&p[1]&&p[0];

endmodule

module cla16(a,b,cin,C,s,G,P);
    input [15:0] a,b;           //  2 16-bit inputs
    input cin;                  //  Input carry
    output [15:0] s;            //  16-bit output sum
    output C,G,P;               //  Output C, G and P
    wire [3:0] g,p,c;
    
    cla4 A1(.a(a[3:0]),.b(b[3:0]),.cin(cin),.s(s[3:0]),.G(g[0]),.P(p[0]));
    cla4 A2(.a(a[7:4]),.b(b[7:4]),.cin(c[0]),.s(s[7:4]),.G(g[1]),.P(p[1]));
    cla4 A3(.a(a[11:8]),.b(b[11:8]),.cin(c[1]),.s(s[11:8]),.G(g[2]),.P(p[2]));
    cla4 A4(.a(a[15:12]),.b(b[15:12]),.cin(c[2]),.s(s[15:12]),.G(g[3]),.P(p[3]),.C(C));

    LCU L1(.g(g),.p(p),.cin(cin),.c(c),.G(G),.P(P));


endmodule