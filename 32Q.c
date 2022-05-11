//Q32
#include <stdio.h>
void main()
{
		
	int x, y, z, i, sum=0;
    printf("Input first integer: "); 
    scanf("%d", &x);
    printf("Input second integer: ");
    scanf("%d", &y);	
    if(x > y) 
	{
		z = y;
		y = x;
		x = z;
	}
	
	for(i = x+1; i < y; i++) 
	{
		if(i%7 == 2 || i%7 == 3)
		{
			printf("%d ", i);
		}
	}
}

