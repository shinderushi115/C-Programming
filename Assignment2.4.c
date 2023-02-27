/* WAP to find out the largest of three numbers.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3;

    printf("\n Enter Three Numbers:");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1>n2 && n1>n3)
        printf("\n %d Is Greater Number",n1);
    else if(n2>n1 && n2>n3)
        printf("\n %d Is Greater Number",n2);
    else
        printf("\n %d Is Greater Number",n3);
    return 0;

}
