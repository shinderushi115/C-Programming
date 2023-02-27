/*WAP to input width and height of a rectangle and calculate the area and 
perimeter*/

#include<stdio.h>
void main()
{

    float width,height,area,perimeter;
	
	printf("\n Enter Width :");
	scanf("%f",&width);
	
	printf("\n Enter Height :");
	scanf("%f",&height);
	
	
	area=width*height;
	printf("\n Area of Rectangle = %.2f",area);
	
	perimeter=2*width+2*height;
	printf("\n Prerimeter of Rectangle = %.2f",perimeter);	
}

