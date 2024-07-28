// Write a C program, which will print two digit numbers whose sum of both digit is nine. e.g. 18,27,36......

#include <stdio.h>

int is_sum_of_digit_is_nine(int num)
{
	int sum=0;
	while(num>0)      
	{
		sum=sum+(num%10);
		num=num/10;
	}
	int res=(sum==9)?1:0;

return res;


}


void sum_of_digit_is_nine(int n)
{

int num=10;
while(n)
	{
		if(is_sum_of_digit_is_nine(num))
		{
			printf("%d-", num);
			n--;
		}
		num++;
		
	}

}



void main()
{
	int n=9;
	sum_of_digit_is_nine(n);

}

