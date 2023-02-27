/* WAP to input two integers and determine that first is multiple of second.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    printf("\n Enter The Two Numbers:");
    scanf("%d %d",&n1,&n2);

    if(n1%n2==0)
        printf("\n 1st is multiple of 2nd");
    else
        printf("\n 1st is not multiple of 2nd");
    return 0;
}
