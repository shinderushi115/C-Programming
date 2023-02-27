/*WAP to input roll number, name amd marks of a student in 5 subject and 
calculate the total and average marks. Display all values*/

#include<stdio.h>
void main()
{
    int rollno,mar,eng,sank,maths,science;
	char name;
	float total,average,percentage;
	
	printf("\n Enter Roll No :");
	scanf("%d",&rollno);
	
	printf("\n Enter Name :");
	scanf("%s",&name);
	
	printf("\n Enter Marks In Marathi :");
	scanf("%d",&mar);
	
    printf("\n Enter Marks In English :");
	scanf("%d",&eng);
	
	printf("\n Enter Marks In Snkskrit :");
	scanf("%d",&sank);
	
	printf("\n Enter Marks In Mathamatics :");
	scanf("%d",&maths);
	
	printf("\n Enter Marks In Science :");
	scanf("%d",&science);
	
    total=mar+eng+sank+maths+science;
    printf("\n Total marks =%.2f",total);
	
	average = (float)total/5;
	printf("\n Average Marks =%.2f",average);
	

}
