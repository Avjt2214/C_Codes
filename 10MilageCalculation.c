/*Write a C program to calculate a bike’s average consumption from the given total distance
(integer value) travelled (in km) and spent fuel (in litres, float number – 2 decimal point).*/

#include<stdio.h>
void main()
{
	int Distance=0;
	float Fuel,Milage=0.0f;
	
	printf("Enter Total Distance Travelled(in Km): ");
	scanf("%d",&Distance);
	printf("Enter Total Fuel Consumption(in L): ");
	scanf("%f",&Fuel);
	
	Milage=Distance/Fuel;
	printf("Average Consumption= %f kmpL",Milage);
}
