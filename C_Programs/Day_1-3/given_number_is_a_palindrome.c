//WAP to check if a given number is a palindrome. For e.g. 12321, 56788765

#include <stdio.h>

int given_number_is_a_palindrome(int num)
{
	int rem=0, rev=0;
	int temp=num;
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		rev=rev*10+rem;
	}

	if(rev==temp)
	{
		printf("Is Palindrome");
		return 1;
	}
	else
	{
		printf("not a Palindrome");
		return 0;
	}


}

void main()
{
	int num=1921;
	printf("%d",given_number_is_a_palindrome(num));



}
