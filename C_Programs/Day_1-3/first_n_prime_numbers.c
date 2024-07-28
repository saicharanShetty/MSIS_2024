//  Generate the first 'N' prime numbers. For Eg. If N=5 then 2,3,5,7,11

#include <stdio.h>

int is_prime(int n)
{
	if(n==2)
		return 1;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

int first_n_prime_num(int num)
{
	
	int cnt=1;
	for(int i=2;cnt<=num;i++)
	{
		if(is_prime(i))
		{
			printf("%d ",i);
			cnt++;
		}

	}


}

void main()
{
	int num=15;
	first_n_prime_num(num);



}
