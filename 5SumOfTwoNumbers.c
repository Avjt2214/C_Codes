/*Write a C program that accepts two integers from the user
and calculate the sum of the two integers.*/

#include<stdio.h>
void main()
{
	int S,n1,n2=0;
	
	printf("Enter First Number: ");
	scanf("%d",&n1);
	printf("Enter Second Number: ");
	scanf("%d",&n2);
	
	S=n1+n2;
	printf("Sum of Two Numbers= %d",S);
}
