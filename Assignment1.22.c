/*WAP to input a number.If the number is even ,print its square otherwise print its
cube*/

#include<stdio.h>
void main()
{
	int no,sq,cube;
	
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
	
	if(no%2==0)
	{
		sq=no*no;
		printf("\n Square of given number = %d",sq);
	}
	else 
	{
		cube=no*no*no;
		printf("\n Cube of given number = %d",cube);
	}

}
