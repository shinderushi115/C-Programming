/*WAP to input three numbers and print them in descending order.*/

#include<stdio.h>
void main()
{
    int a,b,c;
    
    printf("Enter numbers:");
    scanf("%d%d%d",&a,&b,&c);
    
	if((a>=b)&&(a>=c))
    {
        if(b>=c)
        {
            printf("\n Descending order : %d %d %d",a,b,c);
        }
        else
        {
            printf("\n Descending order : %d %d %d",a,c,b);
        }
    }
    else if((b>=a)&&(b>=c))
    {
        if(a>=c)
        {
            printf("\n Descending order : %d %d %d",b,a,c);
        }
        else
        {
            printf("\n Descending order : %d %d %d",b,c,a);
        }
    }
    else if((c>=a)&&(c>=b))
    {
        if(a>=b)
        {
            printf("\n Descending order : %d %d %d",c,a,b);
        }
        else
        {
            printf("\n Descending order : %d %d %d",c,b,a);
        }
    }
}
