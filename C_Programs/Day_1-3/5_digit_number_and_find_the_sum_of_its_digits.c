//Enter a 5 digit number and find the sum of its digits. For E.g. if int number = 12345; then sum = 15
#include <stdio.h>

int five_digit_number_sum_of_its_digits(int num)
{
	int rem=0, sum=0;
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
	}
	return sum;


}

void main()
{
	int num=123;
	printf("%d",five_digit_number_sum_of_its_digits(num));



}
