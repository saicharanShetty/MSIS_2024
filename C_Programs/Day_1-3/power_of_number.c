//Write a recursive function for calculating power of a number. Take base number and  exponent from user

#include <stdio.h>

int power_of_number(int num,int base)
{
  if(1==base)
  	return num;
  else
  	return num*power_of_number(num,--base);

}



void main()
{
	int num=2, base=10;

	//scanf("%d %d",&num, &base);

	printf("pow(%d, %d) = %d",num,base,power_of_number(num,base));


}

