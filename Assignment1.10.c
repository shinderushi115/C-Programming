/*WAP to input the number the days from the user and convert it into years,
weeks and days*/

#include<stdio.h>
void main()
{
	int day;
	float year,week;
	
	printf("\n Enter Days :");
	scanf("%d",&day);
	
	year=day/365;
	printf("\n Years = %.2f",year);
	
	week=day/7;
	printf("\n Weeks = %.2f",week);
}
