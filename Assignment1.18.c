/*WAP to find out the area of a triangle*/

#include<stdio.h>
void main()
{
	float base,height,area;
	
	printf("\n Enter Base :");
	scanf("%f",&base);
	
	printf("\n Enter Height :");
	scanf("%f",&height);
	
	area=base*height;
	printf("\n Area of Triangle = %.2f",area);
}
