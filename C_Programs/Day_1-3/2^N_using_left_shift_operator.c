//WAP to find power of 2^N using left shift operator

#include <stdio.h>

int power_of_2_using_shift_op(int n)
{
	int num=1<<n;
	return num;
	

}

void main()
{
	printf("%d",power_of_2_using_shift_op(3));

}