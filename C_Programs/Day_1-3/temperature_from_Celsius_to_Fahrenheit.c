//Write a program to convert temperature from Celsius to Fahrenheit

#include <stdio.h>

float celcius_to_fahrenheit(float temp_in_c)
{
	
float temp_in_f=((temp_in_c*9)/5)+32;

return temp_in_f;
	

}

void main()
{
	float temp_in_c=37.2;
	
	printf("celcius_to_fahrenheit=%f",celcius_to_fahrenheit(temp_in_c));

}