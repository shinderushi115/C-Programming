/*WAP to input choice(1 or 2). If choice is 1 print the area of circle otherwise print
print the cicumference of circle.Input the radius from user.*/

#include<stdio.h>
#include<math.h>
void main()
{
	float radius,area,circumference;
	int choice;
	
	printf("\n Enter Radius :");
	scanf("%f",&radius);
	    
	printf("\n Enter Choice :");
	scanf("%d",&choice);
	
	if(choice==1)
	{
	    area=3.14*radius*radius;
		printf("\n Area of circle = %.2f",area);
	}
	else if(choice==2)
	{
	    circumference=2*3.14*radius;
		printf("\n Circumferance of circle = %.2f",circumference);	
	}
	else
	{
		printf("\n Wrong input");
	}
}
