/*WAP to find out the gretest of three number using coditional operator*/

#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("\n Enter Values of a,b,c :");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b>c)
	{
		printf("\n a is greter number");
		
		if(b>c) 
		
		{
		    printf("\n b is greter number");	
		}
		
	}
	else
		{
			printf("\n c is greter number");	
		}
	
	
}
