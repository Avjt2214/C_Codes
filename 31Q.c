//Q31
#include <stdio.h>
void main()
{
		
	int x, y, z, i, sum=0;
    printf("Input first integer: "); 
    scanf("%d", &x);
    printf("Input second integer: ");
    scanf("%d", &y);	
	if(x > y) {
		z = y;
		y = x;
		x = z;
	}
	
	for(i = x; i <= y; i++)
	{
		if(i % 17 != 0)
		{
			sum += i;
		}
	}
	
	printf("Sum: %d\n", sum);
}

