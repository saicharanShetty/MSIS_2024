//Write a program to count the occurrences of a digit in a number

#include <stdio.h>

int occurrences_of_a_digit_in_a_number(int num, int digit)
{
	int cnt=0;
	while(num>0)
	{
		if(num%10==digit)
			cnt++;
		num=num/10;
	}
	return cnt;


}

void main()
{
	int num=1233345;
	int digit=2;
	printf("%d",occurrences_of_a_digit_in_a_number(num,digit));



}
