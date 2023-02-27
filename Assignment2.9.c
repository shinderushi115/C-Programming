/*WAP to input a number and count its even or odd digits and find out their 
sum sepretly*/

#include<stdio.h>
void main()
{
	int i,no,even,odd;
	
	printf("\n Enter the value of number :");
	scanf("%d",&no);
	
    for(i=1;i<=no;i++)
	{
		if(i%2==0)
		{
			even=even+i;
		}
		else
		{
			odd=odd+i;
		}
		
	}
	printf("\n Sum of all even numbers =%d",even);
	printf("\n Sum of all odd numbers =%d",odd);
}
