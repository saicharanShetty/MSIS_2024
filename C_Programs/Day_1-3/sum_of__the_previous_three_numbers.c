// Generate a sequence of numbers such that every number in the sequence is the sum of the previous three numbers. The first three numbers are 0,0,1
//sum_of__the_previous_three_numbers.c

#include <stdio.h>

int seq_of_prev_three_num(int n)
{

int a=0, b=0, c=1;
printf("0-0-1");
int next=0;
for(int i=0;i<n-3;i++)
{
  next=a+b+c;
  a=b;
  b=c;
  c=next;
  printf("-%d",c);

}
return 0;

}

void main()
{
	int n=10;
	printf("last %d numbers are =",n);
	seq_of_prev_three_num(n);
	


}