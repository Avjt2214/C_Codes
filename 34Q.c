//Q34
#include <stdio.h>
void main()
{
	float s = 0.0f;
	int i=0;
	for(i=1; i<=50; i++)
	{
		s += (float)1/i;
    }
    printf("Value of S: %.2f", s);
}

