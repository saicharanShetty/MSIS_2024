/* . Amicable numbers are found in pairs. A given pair of numbers is Amicable if the sum 
of the proper divisors (not including itself) of one number is equal to the other number 
and vice – versa. 
For example 220 & 284 are amicable numbers. First we find the proper divisors of 
220: 
220:1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110; 1+ 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 
+ 110 = 284
Now, 284: 1, 2, 4, 71, 142; 1 + 2 + 4 + 71 + 142 = 220 
Write a C program to check that the input pair of numbers is amicable
*/


#include<stdio.h>


int sum_of_divisors(int n)
{

int sum=0;
for(int i=1;i<=n/2;i++)
	{
		sum+=((n%i)==0)?i:0;
	}

return sum;
}



void main()
{
	int n1=220,n2=284;
	if(sum_of_divisors(n2)==n1 && sum_of_divisors(n1)==n2)
		printf("Is a amicable number");
	else
		printf("Not a amicable number");


}

