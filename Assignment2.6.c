/*WAP to find out the sum and averahe of all the numbers within the given 
range.*/

#include <stdio.h>
int main()
{
    int n1,n2;
    float total,avg;
    
	printf("\n Enter The Lower range:");
    scanf("%d",&n1);
    
    printf("\n Enter The Upper range:");
    scanf("%d",&n2);
    
    for(n1=0;n1<n2;++n1)
   {
     scanf("%d",&n1);
     total = total +n1;
   }

   avg = total/n1;

  printf("\nSum of the %d Numbers = %.2f",n1, total);
  printf("\nAverage of the %d Numbers = %.2f",n1, avg);

  return 0;
}
