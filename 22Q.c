//Q22
#include<stdio.h>
void main()
{
	int a[5],i,sum=0;
	printf("enter 5 numbers:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	 
	for(i=0;i<5;i++)
	{
		if(a[i]%2!=0)
		{
			sum=sum+ a[i];
		}
		else
		printf(" ");
	}
	printf("sum of all odd values present %d",sum);
}
