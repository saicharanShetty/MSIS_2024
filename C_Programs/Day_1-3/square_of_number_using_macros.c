//Find square of a number using macros

#include <stdio.h>

#define SQUARE(x) x*x

void main()
{
	int num=3;

	//scanf("%d",&num);

	printf("square(%d) = %d",num,SQUARE(num));

}

