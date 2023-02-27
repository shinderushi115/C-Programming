/*WAP to input radius and calculate the area and circumference of a circle*/

#include<stdio.h>
void main()
{
	float radius,area,circumference;
	
	printf("\n Enter Radius :");
	scanf("%f",&radius);
	
	area=3.14*radius*radius;
	printf("\n Area of Circle = %.2f",area);
	
	circumference=2*3.14*radius;
	printf("\n Circumferance of circle = %.2f",circumference);	
}
