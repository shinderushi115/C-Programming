/*WAP to input marks of student and print the result (pass/fail) using 
conditional operator*/

#include<stdio.h>
void main()
{
	float marks;
	
	printf("\n Enter Marks :");
	scanf("%f",&marks);
	
	if(marks>35)
	{
		printf("\n PASS");
	}
	else
	{
		printf("\n FAIL");
	}
}
