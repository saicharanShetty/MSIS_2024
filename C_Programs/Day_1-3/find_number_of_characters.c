// Given two character inputs, find number of characters between them. For example, if  input is ‘A’ and ‘E’ the output is 3.

#include <stdio.h>

int find_num_of_chars(char c1, char c2)
{
	
	int cnt=0;
	if(c2 > c1)
	{
		if(c2 - c1 > 0)
			return (c2-c1-1);
		else
			return 0;
    }
    else
    {
    	if(c1 - c2 > 0)
			return (c1-c2-1);
		else
			return 0;
    }

   return 0;

}

void main()
{
	char c1='D',c2='A';
	printf("number of characters between %c and %c is = %d",c1,c2,find_num_of_chars(c1,c2));

}