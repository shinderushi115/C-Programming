/*WAP to input side of a square and calculate the area*/

#include<stdio.h>
void main()
{

	float side,area;
	
	printf("\n Enter Side :");
	scanf("%f",&side);
	
	area=side*side;
	printf("\n Area of Square = %.2f",area);
	
}
