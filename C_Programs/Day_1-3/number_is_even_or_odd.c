//Check if entered number is even or odd

#include <stdio.h>

void number_is_even_or_odd(int num)
{
	int res=num%2==0? printf("number is even "): printf("number is ODD");


}

void main()
{
	int num=9;
	number_is_even_or_odd(num);

}