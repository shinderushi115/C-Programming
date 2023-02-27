/*WAP to input a number and print its reverse number.Also check that the number
is palidrome or not*/
  
#include<stdio.h>
void main()
{
	int no,rem,rev;
	int temp;
	
	printf("\n Enter any number :");
	scanf("%d",&no);  
	
	temp==no;
	
	while(no != 0)
	{
	rem = no%10;      
    rev = rev*10+rem;
    no =no/10;
    }
    printf("\n Reverse = %d",rev);
    
    if(temp==rev)
    {
    	printf("\n Number is palidrom");
	}
	else
	{
		printf("\n Number is not palidrom");
	}
    
}
