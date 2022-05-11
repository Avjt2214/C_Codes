//Q38
#include <stdio.h>
void main()
{
	int n[7],i,x=0;
	printf("Enter the first number of the array: ");

	scanf("%d",&x);
	for(i=0;i<7;i++) 
	{
		n[i]=x;
		x=3*x;
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",n[i]);
	}
}

