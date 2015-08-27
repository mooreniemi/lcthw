#include <stdio.h>

int main(int argc, char *argv[])
{
  int inty, jinty;
  int *pointy; /* a pointer to an integer */

  pointy = &inty; /* get mem address of inty and give it to pointy as its value */
  *pointy = 5; /* set value of mem address you got from inty to 5 */

  printf("actual value of pointy is mem address: %d\n", pointy);
  jinty = inty; /* copy value of inty to jinty */

  /* will output 5 5 5 */
  printf("inty is %d and jinty is %d while *pointy is the value through the mem address to inty %d\n", inty, jinty, *pointy);

  return 0;
}
