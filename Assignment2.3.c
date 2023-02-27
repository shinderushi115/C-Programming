/* WAP to convert a small letter into capital letter and vice versa.
[strup( string );strlw( string)]*/


#include <stdio.h>
#include <string.h>

int main()
{
    char ch[20];
    printf("\n Enter The character:");
    scanf("%s",&ch);

    printf("\n New Char is:%s",strupr(ch));
    return 0;
}

