#include <stdio.h>

int main(int argc, char *argv[])
{
  int i, s[4], t[4], u=0;

  for (i = 0; i <= 4; ++i) {
    s[i] = i;
    t[i] = i;
  }

  printf("s:t\n");

  for (i = 0; i <= 4; ++i) {
    printf("%d:%d\n", s[i], s[i]);
  }

  printf("u = %d\n", u);

  return 0;
}
