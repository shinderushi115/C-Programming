/*An electricity board charges accoroding to the following rates:
    for the first 100 units :- 40 paise per unit
    for tne next 200 units  :- 50 paise per unit 
    beyond 300 units 60 paise per unit
    All users are charged meter charges also which are rs 50/-
*/

#include<stdio.h>
void main()
{
    char name[20];
	int unit;
	float rs;
	
	printf("\n Enter Name :");
	scanf("%s",&name);
	
	printf("\n Enter Units :");
	scanf("%d",&unit);
	
	if(unit<=100)
	{
		rs=unit*0.40+50;
		printf("\n Total Bill :%.2f",rs);
	}
	else if(unit<=200&&unit>100)
	{
		rs=unit*0.50+50;
		printf("\n Total Bill :%.2f",rs);
	}
	else if(unit>200)
	{
		rs=unit*0.60+50;
		printf("\n Total Bill :%.2f",rs);
	}
	else
	{
		printf("\n Wrong Input");
	}
}
