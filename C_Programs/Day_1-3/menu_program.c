// Write a menu driven program to read two integers & find their sum, difference & product

#include <stdio.h>

int menu(int a, int b, char op)
{
	switch(op)
	{
	case '+' : return a+b;
	case '-' : return a-b;
	case '*' : return a*b;
	}
}


void main()
{
	int a=10, b=5;
	char op='*';
	printf("%d",menu(a,b,op));



}
