//Q21
#include<stdio.h>
void main()
{
	int sum,pos_count=0.0 ,a[5],i;
	float avg;
	printf("enter 5 numbers:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		if(a[i]>0)
		{
			sum=sum+a[i];
			pos_count++;
		}
		
	} 
	avg=(sum/pos_count);
	printf("the no of positive element: %d",pos_count);
	printf("the average of all positive number are: %f\n",avg);

}
