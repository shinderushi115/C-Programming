/*WAP to input two number and print gretest using conditional operator*/

#include<stdio.h>
void main()
{
	int a,b;
	
	printf("\n Enter values of a and b :");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		printf("\n a is gretest number");
	}
	else
	{
		printf("\n b is gretest number");
	}
}
