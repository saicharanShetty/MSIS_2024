//Check if entered year is leap year or not

#include <stdio.h>

int leap_year_check(int year)
{
	if((year%100==0 && year%4==0 ) || year%400==0)
	{
	  printf("%d is a leap year",year);
	  return 1;
	}
	else
	{
	  printf("%d is not a leap year",year);
	  return 0;
	}

}

void main()
{
	int year=2010;
	leap_year_check(year);

}