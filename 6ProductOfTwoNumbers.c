/*6.Write a C program that accepts two integers from the user
and calculate the product of the two integers.*/

#include<stdio.h>
void main()
{
	int P,n1,n2=0;
	
	printf("Enter First Number: ");
	scanf("%d",&n1);
	printf("Enter Second Number: ");
	scanf("%d",&n2);
	
	P=n1*n2;
	printf("Product of Two Numbers= %d",P);
}
