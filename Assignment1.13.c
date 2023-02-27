/*WAP to find out the quotient and remainder of two numbers.(without using 
modules(%) operator)*/

#include<stdio.h>
void main()
{
	int a,b;
	float rem,quo;
	
	printf("\n Enter First Number :");
	scanf("%d",&a);
	
	printf("\n Enter Second Number :");
	scanf("%d",&b);
	
	rem=a-(a/b)*b;
	printf("\n Remainder = %.2f",rem);
	
	quo=a/b;
	printf("\n Quotient = %.2f",quo);
	
}
