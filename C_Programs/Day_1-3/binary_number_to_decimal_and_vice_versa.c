// WAP to convert a binary number to decimal and vice versa.
#include <stdio.h>


int reverse_the_number_with_ignore_msb(int num)
{
	int rem=0, rev=0;
	while(num>9)       // continue till number will become single digit and that digit needs to be ignored ( which is first set MSB 1)
	{
		rem=num%10;
		num=num/10;
		rev=rev*10+rem;
	}
	return rev;


}


int decimal_number_to_binary(int num)
{

int binary_num=1;   // first digit is set as 1 to start growing the number when multiplied by 10;

while(num>0)
{
	binary_num =(binary_num*10) + (num%2);
	num=num/2;
}
return (reverse_the_number_with_ignore_msb(binary_num)); //output needs to be reversed and initially set MSB 1 needs to be removed.


}

int binary_number_to_decimal(int num)
{

int sum=0,i=0;
while(num>0)
	{
		sum=sum+((num%10)<<i); //go generate power of 2 using "<<" operator and multiply it to each of digit.
		i++;
		num=num/10;
	}
	
return sum;

}

void main()
{
	int decimal_num=56;
	int binary_num=1110;
	printf("binary = %d ",decimal_number_to_binary(decimal_num));
	
	printf("binary = %d",binary_number_to_decimal(binary_num));


}