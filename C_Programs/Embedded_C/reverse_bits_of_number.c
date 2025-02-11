void main(void)
		{
		   int a=0x01020304;
		   
		   //reverse a bits of given number.
		   int b=0;
		   
		   for(int i=0;i<32;i++)
		   {
			   b=b<<1;
			   b=b|((a&(0x01<<i))>>i);
		   }
		   printf("%x\n",a);
		   printf("%x",b);


		}
		
		//Another logic
		
		for (int i = 0; i < 32; i++) 
		{
			b = (b << 1) | (a & 1);  // Append the LSB of `a` to `b`
			a >>= 1;                // Shift `a` to process the next bit
		}
