// Write a recursive function for calculating factorial of a number.


#include <stdio.h>

int factorial_of_num(int n)
{
  if(n==1)
  {
  	return 1;
  }
  else
  {
  	return n*factorial_of_num(n-1);
  }

}



void main()
{
	int num=6;

	//scanf("%d",&num);

	printf("factorial(%d) = ",num);
	printf("%d",factorial_of_num(num));


}

