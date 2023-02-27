/*WAP to input a number and print its equivalent character code*/

#include<stdio.h>
int main()
{
	char ch;
	int code;
	
	printf("\n Enter any ASCII Code :");
	scanf("%d",&code);
	
	ch=(char)code;
	printf("\n Equvilant Character = %c",ch);
}
