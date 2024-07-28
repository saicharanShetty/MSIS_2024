// Write a C program to display and find the sum of the series 1+11+111+....111 up to n.

#include <stdio.h>

int power_n(int n)
{
	int pro=1;
	for(int i=0;i<n;i++)
		pro=pro*10;
	return pro;
}

int sum_of_the_series_up_to_n(int n)
{
	int sum=0, term=0;
	for(int i=0;i<n;i++)
	{
		term=(power_n(i))+term;
		printf("%d +",term);
		sum=sum+term;
	}
	printf("\nsum= %d",sum);
}


void main()
{
	int num=5;
	sum_of_the_series_up_to_n(num);



}
