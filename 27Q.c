//Q27
#include <stdio.h>
void main()
  {
	int x, y, i, total = 0;
	printf("Enter first number of the pair: ");
	scanf("%d", &x);
    printf("Enter second number of the pair: ");
	scanf("%d", &y);
	if (x<y)
	{
		return 0;
	}
	printf("List of odd numbers: ");
	for(i = y; i<=x; i++)
	{		
	  if ((i%2) != 0)
	  {
		printf("%d\n", i);
		total += i;
		
	   }	
    }
	
	printf("Sum=%d", total);
}

