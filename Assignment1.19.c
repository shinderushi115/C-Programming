/*WAP to find a whether a given number is even or odd using conditional operator*/

#include<stdio.h>

void main()
{
	int no;
	
	printf("\n Enter Number :");
	scanf("%d",&no);
	
	if(no%2==0)
	{
		printf("\n Even");
	}
	else
	{
		printf("\n Odd");
	}
}
