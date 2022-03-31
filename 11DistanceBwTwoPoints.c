//Write a C program to calculate the distance between the two points.

#include<stdio.h>
#include<math.h>

void main()
{
	float x1,x2,y1,y2,D=0.0f;
	printf("Enter X Co-ordinate of the First Point: ");
	scanf("%f",&x1);
	printf("Enter Y Co-ordinate of the First Point: ");
	scanf("%f",&y1);
	
	printf("Enter X Co-ordinate of the Second Point: ");
	scanf("%f",&x2);
	printf("Enter Y Co-ordinate of the Second Point: ");
	scanf("%f",&y2);
	
	D=(sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))));
	printf("Distance Between Two Points is= %f",D);
}

