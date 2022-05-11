//Q36
#include <stdio.h>
void main ()
{
  int i,n=0;
  printf("Input an integer: ");
  scanf("%d",&n);
  printf("All positive divisors of %d: ",n);
  for (i=1;i<=n;i++)
  {
    if (n%i==0)
    {
      printf("%d\n",i);
    }
  }
}

