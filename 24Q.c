//Q24
#include <stdio.h>
void main() {
    int x;
	printf("Input an integer: ");
	scanf("%d", &x);

	
	   if(x == 0){
			printf("Positive\n");
		} 
		else if(x < 0 && (x%2) != 0) 
		{
			printf("Negative Odd\n");
		} 
		else if(x < 0 && (x%2) == 0) 
		{
			printf("Negative Even\n");
		} 
		else if(x > 0 && (x%2) != 0) 
		{
			printf("Positive Odd\n");
		} 
		else if(x > 0 && (x%2) == 0) 
		{
			printf("Positive Even\n");
		} 	
}

