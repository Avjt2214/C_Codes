//Write a C program to find the largest of three Integers

#include<stdio.h>

void main()
{
	int n1=0;
	int n2=0;	
	int n3=0;
	
	printf("Enter First Integer:");
	scanf("%d",&n1);
	printf("Enter Second Integer:");
	scanf("%d",&n2);
	printf("Enter Third Integer:");
	scanf("%d",&n3);
	
	if(n1>n2 && n1>n3)
		printf("The Largest Number is:%d",n1);
	else if(n2>n1 && n2>n3)
		printf("The Largest Number is:%d",n2);
	else if(n1=n2 && n2==n3)
		printf("All the Numbers are Equal.");
	else
		printf("The Largest Number is:%d",n3);
}
