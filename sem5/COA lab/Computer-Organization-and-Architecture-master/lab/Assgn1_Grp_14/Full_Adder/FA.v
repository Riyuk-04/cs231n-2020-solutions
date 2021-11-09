module full_adder(s,c,a,b,c0);      //  Defining Module
    input a,b,c0;                   //  Declaring a, b and c0 as inputs 
    output s,c;                     //  Declaring s and c as outputs
    wire t1,t2,t3,t4,t5;            //  Declaring wires
    xor g1(t1,a,b);                 //  t1 = a xor b
    xor g2(s,t1,c0);                //  s = t1 xor c0   (s = a xor b xor c0)
    or g3(t5,t2,t3);                //  t5 = t2 + t3s
    or g4(c,t4,t5);                 //  c = t4 + t5    (c = a*b + b*c0 + c0*a)
    and g5(t2,a,b);                 //  t2 = a*b
    and g6(t3,a,c0);                //  t3 = a*c0
    and g7(t4,b,c0);                //  t4 = b*c0
endmodule