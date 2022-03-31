//Write a C program that read 5 numbers and sum of all odd values between them.
#include<stdio.h>
void main()
{
	int a,b,c,d,e,sum,o1,o2,o3,o4,o5=0;
	printf("Enter five Numbers: ");
	scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
	
	if((a%2)!=0)
	{
		o1=a;
	}
	if((b%2)!=0)
	{
		o2=b;
	}
	if((c%2)!=0)
	{
		o3=c;
	}
	if((d%2)!=0)
	{
		o4=d;
	}
	if((e%2)!=0)
	{
		o5=e;
	}
	sum=o1+o2+o3+o4+o5;
	printf("=%d\n",sum);
}
