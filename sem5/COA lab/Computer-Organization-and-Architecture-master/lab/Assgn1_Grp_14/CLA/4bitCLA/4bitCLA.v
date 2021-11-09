module cla4(a,b,cin,C,s,G,P);
    input [3:0] a,b;                //  2 4-bit inputs for the CLA
    input cin;                      //  1-bit carry input
    output [3:0] s;                 //  4-bit sum output
    output C,G,P;                   //  Output carry, G and P
    wire [3:0]g,p,c;
    
    assign p=a^b;                   //  Assigning p[i] as a[i] xor b [i]
    assign g=a&b;                   //  Assigning g[i] as a[i] and b[i]

    assign c[0]=cin;                //  First carry is the input carry
    assign c[1]=g[0] || (p[0]&&cin);                        //  1st carry = g[0] + p[0]*cin
    assign c[2]=g[1] || (g[0]&&p[1]) || (p[0]&&p[1]&&cin);                              //  2nd carry = g[1] + p[1]*c[1]    , replacing c[1] by the above formula
    assign c[3]=g[2] || (g[1]&&p[2]) || (g[0]&&p[2]&&p[1]) || (p[2]&&p[1]&&p[0]&&cin);                                  //  3rd carry = g[2] + p[2]*c[2]    , replacing c[2] by the above formula
    assign C=g[3] || (g[2]&&p[3]) || (g[1]&&p[3]&&p[2]) || (g[0]&&p[3]&&p[2]&&p[1]) || (p[3]&&p[2]&&p[1]&&p[0]&&cin);                       //  4th carry = g[3] + p[3]*c[3]    , replacing c[3] by the above formula

    assign s[0]=p[0]^cin;           // s[0] = a[0] xor b[0] xor cin
    assign s[1]=p[1]^c[1];          // s[1] = a[1] xor b[1] xor c[1]
    assign s[2]=p[2]^c[2];          // s[2] = a[2] xor b[2] xor c[2]
    assign s[3]=p[3]^c[3];          // s[3] = a[3] xor b[3] xor c[3]
    
    assign G=g[3] || (g[2]&&p[3]) || (g[1]&&p[3]&&p[2]) || (g[0]&&p[3]&&p[2]&&p[1]);            //  Block generate for the Lookahead carry unit (LCU)
    assign P=p[3]&&p[2]&&p[1]&&p[0];                                                            //  Block propogate for the Lookahead carry unit (LCU)
endmodule


    


