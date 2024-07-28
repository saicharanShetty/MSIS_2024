 //2. calculate the area of Circle
 #include <stdio.h>

 #define PI (float)22/7

float area_of_circle(float radius)
{
	return (PI * radius * radius);

}

void main()
{

	printf("%f",area_of_circle(2));

}