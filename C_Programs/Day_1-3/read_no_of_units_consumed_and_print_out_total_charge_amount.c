/* . An Electricity board charges the following rates for use of electricity. 
For the First 200 units : Rs 5 per unit 
For the next 100 units : Rs7 per unit 
Beyond 300 units : Rs 10 Per unit. 
Write a C Program to read no of units consumed and print out total charge amoun */

#include <stdio.h>

float no_of_units_consumed_and_print_out_total_charge_amount(float units)
{
	if(units<=200)
	{
		return (5 * units);
	}
	else if(units >200 && units <=300)
	{
		return (5 * 200)+(100*(units-200));
	}
	else if(units>300)
	{
		return(10*units);
	}
	return 0;
	
}


void main()
{
	float units;
	scanf("%f",&units);
	printf("%f",no_of_units_consumed_and_print_out_total_charge_amount(units));



}
