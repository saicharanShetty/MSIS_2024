//Check if given input is a character or integer

#include <stdio.h>

void input_is_a_character_or_integer(char num)
{
	if((int)num>=48 && (int )num<=57) // numbers in range 0-9 will have ASCII values starts from 48 till 57 as per ASCII Table
	{
		printf("It's a number");
	}
	else
	{
		printf("It's a character");
	}
	

}

void main()
{
	
	char c='C';
	input_is_a_character_or_integer(c);

}