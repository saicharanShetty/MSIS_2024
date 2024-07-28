/* WAP to print the following sketch with input N as number of rows
* * * *
 * * *
 * *
 * 
 */

#include <stdio.h>

#define PATTERN '*'

int right_angle_pattern(int n)
{

for(int i=1;i<=n;i++)
	{
		for(int j=0;j<i;j++)
			printf("%c ",PATTERN);
		printf("\n");

	}
return 0;

}

void main()
{
	int n=10;
	right_angle_pattern(n);
	


}
