/*If a number 972 is entered through the keyboard, your program should print 
/*“Nine Seven Two”. Write the program such that it does this for any positive 
integers.*/

#include <stdio.h>
int main ()
{
    char a[100];
    int i;
    
    printf("Enter a number: ");
    gets(a);
    for(i=0;i<a[i];i++)
    {
 if(a[i]=='0')
     printf("Zero ");
 else if(a[i]=='1')
     printf("One ");
 else if(a[i]=='2')
     printf("Two ");
 else if(a[i]=='3')
     printf("Three ");
 else if(a[i]=='4')
     printf("Four ");
 else if(a[i]=='5')
     printf("Five ");
 else if(a[i]=='6')
     printf("Six ");
 else if(a[i]=='7')
     printf("Seven ");
 else if(a[i]=='8')
     printf("Eight ");
 else if(a[i]=='9')
     printf("Nine ");
    }
}
