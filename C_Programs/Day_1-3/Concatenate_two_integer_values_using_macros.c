// Concatenate two integer values using macros

#include <stdio.h>

#define a 2
#define b 3
#define ab 23
#define CONCAT(x,y) x##y


void main()
{

	//scanf("%d",&num);

	printf("%d + %d = %d",a,b,CONCAT(a,b));

}

