//Q37
#include <stdio.h>
void main()
{
	int n[20],i,x,a=0;
	printf("Input number of elements in the array: ");
	scanf("%d",&a);
	for(i=0;i<a;i++) 
	{
		scanf("%d",&x);
		if(x>0) 
		{			
		  n[i]=x;
		} 
		else
		{
			n[i]=100;
		}
	}
	printf("Array values are: ");
	for(i = 0; i < a; i++)
	{
		printf("n[%d] = %d	", i, n[i]);
	}
}

