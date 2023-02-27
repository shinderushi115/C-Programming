/*WAP to print the factorial of a given number.*/

#include<stdio.h>
int main()
{
	int no,fact=1,i;
	
	printf("\n Enter a number to calculate its factorial :");
	scanf("%d",&no);
	
	for(i=0;i<=no;i++)
	{
	   fact=fact*i; 
    }
    printf("\n Factorial of %d =%d",no,fact);
}
