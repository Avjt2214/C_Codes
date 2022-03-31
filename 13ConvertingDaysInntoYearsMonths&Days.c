/*13.Write a C program to convert a given integer (in days) to years, months and days,
assumes that all months have 30 days and all years have 365 days.*/
#include<stdio.h>
void main()
{
	int N,Y,M,D = 0;
	printf("Enter no of Days: ");
	scanf("%d",&N);
	
	Y=N/365;
	M=(N-(Y*365))/30;
	D=((N-(Y*365))-(M*30));
	printf("%d days is Equal to %d years,%d Months and %d Days",N,Y,M,D);
}
