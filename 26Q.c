//Q26
#include <stdio.h>
#define MAX 5

void main() 
{
	int number[MAX], i=0, j=0, max=0, num_pos=0;
	printf("Input 5 integers: \n");
	for(i = 0; i < MAX; i++) {
		scanf(" %d", &number[i]);
	}
	
	for(j = 0; j < MAX; j++) 
	{
		if(number[j] > max) {
			max = number[j];
			num_pos = j;
		}
	}
	printf("Highest value: %d\nPosition: %d\n", max, num_pos+1);
}

