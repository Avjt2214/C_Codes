//Write a C program that reads an integer between 1 and 12
//and print the month of the year in English.
#include<stdio.h>
void main()
{
	int A=0;
	printf("Input a number between 1 to 12 to get the month name: ");
	scanf("%d",&A);
	
	if(A==1)
		printf("January");
	else if(A==2)
		printf("Febuary");
	else if(A==3)
		printf("March");
	else if(A==4)
		printf("April");
	else if(A==5)
		printf("May");
	else if(A==6)
		printf("June");
	else if(A==7)
		printf("July");
	else if(A==8)
		printf("August");
	else if(A==9)
		printf("September");
	else if(A==10)
		printf("October");
	else if(A==11)
		printf("November");
	else if(A==12)
		printf("December");
	else
		printf("Oops! There's only 12 months'");
}
