/* Write a C program to calculate the volume of the following shapes: Cube, Cuboid, 
Sphere, Cylinder and Cone. Ask the user which one s/he wants to calculate, and take 
the appropriate required inputs. Then prfloat the result. The input should be taken in the 
main function and calculations for every solid should be done in a separate function 
by passing appropriate arguments.
Example: If the user chooses the option for cube, only one input is required i.e., the 
side. The volume is then calculated and prfloated. 
If the user chooses the option for cuboid, only three inputs are required i.e., length, 
breadth and height. The volume is then calculated and prfloated.
*/

#include <stdio.h>
#define PI (float)22/7

float volume_cube(float a)
{
	 return (a*a*a);

}

float volume_cuboid(float a, float b, float c)
{
	 return (a*b*c);

}

float volume_sphere(float r)
{
	 return (4*PI*r*r*r/3);

}

float volume_cylinder(float h, float r)
{
	 return (PI*r*r*h);

}

float volume_cone(float h, float r)
{
	 return (volume_cylinder(h,r)/3);

}


void main()
{
	printf("please slect below choices for appropriate shapes \n 1. For cube \n 2.cuboid \n 3.Sphere \n 4.Cylinder \n 5.Cone \n");
	int ch;
	float v=0;
	scanf("%d",&ch);
	switch(ch)
	{
	case 1: 
		{
			float a;
			printf("Enter side of cube \n");
			scanf("%f",&a);
			v=volume_cube(a);
			printf("%f",v);
			break;
		}
	case 2:
		{
			float l,b,h;
			printf("Enter sides of cuboid length, breadth, height respectively \n");
			scanf("%f %f %f",&l,&b,&h);
			v=volume_cuboid(l,b,h);
			printf("%f",v);
			break;
		}
	case 3:
		{
			float r;
			printf("Enter radius of Sphere \n");
			scanf("%f",&r);
			v=volume_sphere(r);
			printf("%f",v);
			break;
		}
	case 4:
		{
			float h,r;
			printf("Enter height and radius of cylinder \n");
			scanf("%f %f",&h,&r);
			v=volume_cylinder(h,r);
			printf("%f",v);
			break;
		}
	case 5:
		{
			float h,r;
			printf("Enter radius and height of cone \n");
			scanf("%f %f",&h,&r);
			v=volume_cone(h,r);
			printf("%f",v);
			break;
		}

	}



}
