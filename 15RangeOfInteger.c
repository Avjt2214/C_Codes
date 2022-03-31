#include<stdio.h>
void main()
{
	int i=0;
	
	printf("Enter an Integer: ");
	scanf("%d",&i);
	
	if(i>=0 && i<=20)
		printf("Range is:[0,20]");
	else if(i>=21 && i<=40)
		printf("Range is:[21,40]");
	else if(i>=41 && i<=60)
		printf("Range is:[41,60]");
		else if(i>=61 && i<=80)
		printf("Range is:[61,80]");
	else
	printf("Outside of Range!!!");
}

