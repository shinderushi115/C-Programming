/*WAP to input a character and print its ASCII value*/

#include<stdio.h>
void main()
{
	int code;
	char ch;
	
	printf("\n Enter any character :");
	scanf("%c",&ch);
	
	code=(int)ch;
	printf("\n ASCII code= %d",code);
}
