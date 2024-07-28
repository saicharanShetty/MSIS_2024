//Write a program that converts upper case to lower
#include <stdio.h>

char upper_to_lower(char c)
{
	c=c+32;  //A -65 & a-97 --> ASCII codes. 97-65=32. so add 32 to A
	return c;

}

void main()
{
	char c='E';
	printf("%c",upper_to_lower(c));

}