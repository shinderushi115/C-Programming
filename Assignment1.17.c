 /*WAP to input inches from the user and convert into in yards,feet.*/
 
 #include<stdio.h>
 void main()
 {
 	float inch,yard,feet;
 	
 	printf("\n Enter value in Inches :");
 	scanf("%f",&inch);
 	
 	yard=inch*0.0278;
 	printf("\n In Yard = %.2f",yard);
 	
 	feet=inch*0.0833;
 	printf("\n In Feet = %.2f",feet);
}
