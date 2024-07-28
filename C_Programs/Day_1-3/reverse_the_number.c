//Write a program to reverse the number. For E.g. If int number = 12345; then the output reverse = 54321

#include <stdio.h>

int reverse_the_number(int num)
{
	int rem=0, rev=0;
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		rev=rev*10+rem;
	}
	return rev;


}

void main()
{
	int num=12345;
	printf("%d",reverse_the_number(num));



}
