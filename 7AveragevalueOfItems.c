/*7.Write a C program that accepts two item’s weight (floating points' values)
and number of purchase (floating points' values)
and calculate the average value of the items.*/
#include<stdio.h>

void main()
{
	float W1,W2,A=0.0f;
	int N1,N2=0;
	
	printf("Weight of First Item: ");
	scanf("%f",&W1);
	printf("No of Purchased Item: ");
	scanf("%d",&N1);
	printf("Weight of Second Item: ");
	scanf("%f",&W2);
	printf("No of Purchased Item: ");
	scanf("%d",&N2);
	
	A=((W1*N1)+(W2*N2))/(N1+N2);
	printf("Average Value of Items= %f",A);
}
