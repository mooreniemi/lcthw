#include <stdio.h>
#include <assert.h>

// https://en.wikipedia.org/wiki/Assert.h
int test_assert(int x) {
  assert(x != 4);
  return x;
}

int main(int argc, char *argv[])
{
  int i;
  int j;

  // i effectively bounds both
  for (i = 0, j = 10; i < 9; ++i, --j) {
    printf("j = %d\n", j);
    test_assert(j);
    printf("i = %d\n", i);
    test_assert(i);
  }

  return 0;
}
