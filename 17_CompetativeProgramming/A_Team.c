#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  int test_cases, i, count = 0;
  scanf("%d",&test_cases);
  for ( i = 0; i < test_cases; i++)
  {
    int P,V,T;
    scanf("%d%d%d",&P,&V,&T);
    if ((P == 0 && V == 0) || (P == 0 && T == 0) || (V == 0 && T == 0))
    {
        continue;
    }
    else
    {
        count++;
    }
  }
  printf("%d",count);
  
  return 0;
}