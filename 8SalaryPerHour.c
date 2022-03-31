/*8.Write a C program that accepts an employee's ID, total worked hours of a month
and the amount he received per hour.
Print the employee's ID and salary (with two decimal places) of a particular month.*/
#include<stdio.h>

void maain()
{
	int ID=0;
	float WH=0.0f;
	float Amount=0.0f;
	float Salary=0.0f;
	
	printf("Enter ID: ");
	scanf("%d",&ID);
	printf("Enter Total no of hour worked: ");
	scanf("%f",&WH);
	printf("Amount Received per Hour: ");
	scanf("%f",&Amount);
	
	//Salary=WH*Amount;
	printf("Employee Id: %d\n Salary= %f*%f",ID,WH*Amount);
}
