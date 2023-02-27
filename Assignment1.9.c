/*WAP to input the principle,rate,time from the user and calculate the simple 
interest and total amount. Display all the values*/ 

#include<stdio.h>
void main()
{
	long principle;
	float rate,time,interest,total;
	
	printf("\n Enter Principle :");
	scanf("%ld",&principle);
	
	printf("\n Enter Rate :");
	scanf("%f",&rate);
	
	printf("\n Enter Time :");
	scanf("%f",&time);
	
	interest=(principle*rate*time)/100;
	printf("\n Simple Interest = %.2f",interest);
	
	total=principle+interest;
	printf("\n Total amount = %2.f",total);	
}
