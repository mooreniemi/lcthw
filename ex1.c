#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void swap(int *first_address, int *second_address) {
  int holding_pen;

  holding_pen = *first_address;

  *first_address = *second_address;

  *second_address = holding_pen;
}

int main(int argc, char *argv[]) {
  if(argc == 1) {
    printf("you need 2 things to swap\n");
    return 1;
  } else {
    int a, b;

    a = atoi(argv[2]);
    b = atoi(argv[3]);

    printf("preswap: %d %d\n", a, b);

    // pass ints in by their addresses
    swap(&a, &b);

    printf("postswap: %d %d\n", a, b);
  }

  return 0;
}
