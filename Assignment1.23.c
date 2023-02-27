/*WAP to input employee code,name, basic salary, of an employee and calculate 
the following values:
HRA   40%of basic salary                      DA    10% of basic salry 
CCA   5% of basic salary                      GS    Basic+HRA+DA+CCA 
PF    10% of GS                               IT     10% of GS
NS    GS-(PF+IT)
*/

#include<stdio.h>
void main()
 
{
    int empid;
 	char empname[50];
 	long salary;
 	float da, hra, cca, pf, ns, gs, it , gross;
 	
 	printf("\n Enter emp code :");
 	scanf("%d",&empid);
 	
 	printf("\n Enter EMployee Name :");
 	scanf("%s",&empname);
 	
 	printf("\n Enter Salary :");
 	scanf("%ld",&salary);
 	
 	hra=salary*0.40f;
 	printf("\n Houce Rent Allowance=Rs.%.2f",hra);
 	
 	da=salary*0.10f;
 	printf("\n Dearness Allowance = Rs.%.2f",da);
 	
 	cca=salary*0.05f;
 	printf("\n CCA = Rs.%.2f",cca);
 	
 	gs=salary+hra+da+cca;
 	printf("\n GS = Rs.%.2f",gs);
 	
 	pf=0.10*gs;
 	printf("\n PF =Rs.%.2f",pf);
 	
 	it=0.10*gs;
 	printf("\n IT =Rs.%.2f",it);
 	
 	ns=gs-(pf+it);
 	printf("\n NS =Rs.%.2f",ns);
 	
 	gross=hra+da+cca+gs+pf+it+ns;
 	printf("\n GROSS =Rs.%.2f",gross);
}
