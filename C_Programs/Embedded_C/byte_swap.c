//write a c code to byte swap and reverse a bits of given number.
// Byte swap within a number ( swap 4th byte with 1st and 2nd with 3rd) [ used to convert endianess of a number ]
	
int a=0x01020304;
int b= ((a&0xFF000000)>>24)|((a&0x00FF0000)>>8) |((a&0x0000FF00)<<8)|((a&0x000000FF)<<24);
printf("%x",b);
	
