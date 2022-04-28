//Q29
#include <stdio.h>
void main() 
{
	int pass, x=2345678;	

	while (x!=0)
	{
	printf("Input password: ");
	scanf("%d",&pass);	
	
	if (pass==1234)
	{
		printf("Correct password");
		x=0;
    }
    else
    {
       printf("Wrong password!!! try again");       
	}
	printf("\n");
   }
} 

