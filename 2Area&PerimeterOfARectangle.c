/*Write a C program to compute the perimeter and area of a rectangle 
with a height of 7 inches. and width of 5 inches.*/
#include<stdio.h>
void main()
{
	float Perimeter,Area,Height,Width=0.0f;
	
	printf("Height of Rectangle(inch)= ");
	scanf("%f",&Height);                 
	printf("Width of Rectangle(inch)= ");
	scanf("%f",&Width);
	
	Area=(Height*Width);
	Perimeter=(2*(Height+Width));
	
	printf("Area of the Rectangle(sq inch)= %f\n",Area);
	printf("Perimeter of the Rectangle(inch)= %f",Perimeter);
}
