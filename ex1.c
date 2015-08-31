#include <stdio.h>

void swap(int *i, int *j)
{
  int holding_pen;
  // put the first int in the pen
  holding_pen = *i;
  // put the second int into the first position
  *i = *j;
  // take i from the holding pen and put it in second position
  *j = holding_pen;
}

int main()
{
  int a,b;

  a = 5;
  b = 10;

  printf("preswap: %d %d\n", a, b);
  swap(&a,&b);
  printf("postswap: %d %d\n", a, b);

  return 0;

}
