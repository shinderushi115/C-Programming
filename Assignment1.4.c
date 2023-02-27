/*WAP to input a number and print its cube*/

#include<stdio.h>
void main()
{
	float no,cube;
	
    printf("Enter Number :");
	scanf("%f",&no);
	
	cube = no*no*no;
	printf("Cube of given Number = %.2f",cube);

}
