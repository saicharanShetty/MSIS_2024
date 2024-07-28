// Use recursive calls to evaluate F(x) = x + x3/3! + x5/5! + x7/7!+..

#include <stdio.h>

int factorial_of_num(int n)
{
  if(n==0)
  {
  	return 1;
  }
  else
  {
  	return n*factorial_of_num(n-1);
  }

}

int power_of_number(int num,int base)
{
  if(1==base)
  	return num;
  else
  	return num*power_of_number(num,--base);

}

float sum_of_series(int num, int n_terms)
{
	float sum=0;
	int term=0;
	for(int i=1;i<=n_terms;i++)
	{
		term=2*i-1;
		sum=sum+(float)(power_of_number(num,term)/factorial_of_num(term));
	}
	return sum;

}

void main()
{
	int num=3,n_terms=9;  //number of terms in series.

	//scanf("%d",&num);

	printf("sum of first %d terms in series = %.6f", n_terms, sum_of_series(num,n_terms));


}

