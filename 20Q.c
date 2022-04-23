//Q20
#include<stdio.h>
void main()
{
	int a[5],i,pos_count=0,neg_count=0;
	printf("enter 5 numbers:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	 
	for(i=0;i<5;i++)
	{
		if(a[i]>0)
		{
			pos_count++;
		}
		else if(a[i]==0)
		printf(" ");
		else
		neg_count++;
	}
	printf("the no of positive element: %d",pos_count);
	printf("\nthe no of negative numbers : %d",neg_count);
}
