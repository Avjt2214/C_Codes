//Q19
#include <stdio.h>

void main() {
	int i;
	printf("Even numbers between 1 to 50 (inclusive):\n");
	for (i = 1; i <= 50; i++) 
	{
		if(i%2 == 0) 
		{
		  printf("%d ", i);
		}
	}
}

