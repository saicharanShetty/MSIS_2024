/* Generate the following sequence using a single loop with N as number of rows
*
* *
* * *
* * * *
*/

#include <stdio.h>

#define PATTERN '*'

int single_loop_pattern(int n)
{
int temp;
for(int i=1;i<=n;i++)
	{
		temp=n;
		printf("%c ",PATTERN);
		if(i)

		if(temp!=n)
		{
			printf("\n");
		}

	}
return 0;

}

void main()
{
	int n=10;
	single_loop_pattern(n);
	


}

