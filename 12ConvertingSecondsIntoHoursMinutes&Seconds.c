//Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
#include<stdio.h>
void main()
{
	int N,H,M,S=0;
	printf("Enter No of Seconds: ");
	scanf("%d",&N);
	
	H=N/3600;
	M=(N-(H*3600))/60;
	S=((N-(H*3600))-(M*60));

	printf("%d Seconds is Equal to %d Hours,%d Minutes and %d Seconds",N,H,M,S);
}
