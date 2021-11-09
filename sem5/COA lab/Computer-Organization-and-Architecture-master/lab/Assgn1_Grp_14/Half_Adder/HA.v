module half_adder(s,c,a,b);		//	Defining Module
    output s,c;					//	Declaring s and c as outputs
    input a,b;					//	Declaring a and b as inputs 
    xor g1(s,a,b);				//	s = a xor b
    and g2(c,a,b);				//	c = a and b
endmodule						//	Ending Module