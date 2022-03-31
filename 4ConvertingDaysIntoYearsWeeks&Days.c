//Write a C program to convert specified days into years, weeks and days.
#include<stdio.h>

void main()
{
	int N,Y,W,D = 0;
	printf("Enter no of Days: ");
	scanf("%d",&N);
	
	Y=N/365;
	W=(N-(Y*365))/7;
	D=((N-(Y*365))-(W*7));
	printf("%d days is Equal to %d years,%d weeks and %d Days",N,Y,W,D);
}
