//Q30
#include <stdio.h>
void main() 
{
	float x,y,division=0.0f;
    printf("Input two numbers: ");
	printf("\nx: "); 
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
   
   if(y != 0)
     {
   		division = x/y;
		printf("%.1f\n", division);
	 } 
	else 
	 {
	 		printf("Division not possible.\n");
	  }
}

