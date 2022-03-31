//Write a C program to compute the perimeter and area of a circle with a given radius.

#include<stdio.h>
void main()
{
	float P,A,R=0.0f;
	
	printf("Radius of Your Circle= ");
	scanf("%f",&R);
	
	P=(2*3.14*R);
	A=(R*R*3.14);
	
	printf("Perimeter is= %f Unit\n",P);
	printf("Area is= %f Sq Unit",A);
}
