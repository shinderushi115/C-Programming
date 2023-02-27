/*WAP to input 4 integers a,b,c,d and check the equation 3*a+3*b+3*c=3*d is 
statisfied or not*/

#include<stdio.h>
int main()
{
    int a,b,c,d;
	float equation1,equation2;
	
	printf("\n Enter value of a :");
	scanf("%d",&a);	
	
    printf("\n Enter value of b :");
	scanf("%d",&b);	
	
	printf("\n Enter value of c :");
	scanf("%d",&c);	
	
	printf("\n Enter value of d :");
	scanf("%d",&d);	
	
	equation1=3*a+3*b+3*c;
	printf("\n Value of equation 1 is :%.2f",equation1);
	equation2=3*d;
	printf("\n Value of equation 2 is :%.2f",equation2);
	if(equation1==equation2)
	{ 
	    printf("\n This equation is statisfied");
	}	
	else
	{
		printf("\n This equation is not statisdied");
	}
} 
