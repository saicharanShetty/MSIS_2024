/*
A number is called an Armstrong number if the sum of the cubes of the digits of the 
number is equal to the number. For example 153 = 1^3 + 5^3 + 3^3. Write a C 
program that asks the user to enter a number and returns if it is Armstrong or not.
*/

#include <stdio.h>

int power_of_number(int num,int base)
{
  if(1==base)
  	return num;
  else
  	return num*power_of_number(num,--base);

}

int sum_of_cube_of_number(int num)
{
	int sum=0;
	while(num>0)      
	{
		sum=sum+power_of_number(num%10,3);
		num=num/10;
	}

return sum;


}

int is_armstrong_number(int num)
{
	if(num==sum_of_cube_of_number(num))
		return 1;
	else 
		return 0;

}

void main()
{
	int num=153;
	int res=is_armstrong_number(num)?printf("%d is Armstrong number",num): printf("Not a Armstrong number");


}

