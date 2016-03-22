/*
 * =====================================================================================
 *
 *       Filename:  show-bytes.c
 *
 *    Description:  Code to Print the Byte Representation of Program Objects. This code uses casting to
 *    circumvent the type system. Similar functions are easily defined for other data types.
 *
 *        Version:  1.0
 *        Created:  03/22/2016 11:16:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: Randal E Bryant, David RO Halaron
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len) {
  int i;
  for (i = 0; i < len; ++i) {
    printf(" %.2x\n", start[i]);
  }
}

void show_int(int x) {
  printf("as an int \n");
  show_bytes((byte_pointer) &x, sizeof(int));
  printf("was an int \n");
}

void show_float(float x) {
  printf("as a float \n");
  show_bytes((byte_pointer) &x, sizeof(float));
  printf("was a float \n");
}

void show_pointer(void *x) {
  printf("as a pointer \n");
  show_bytes((byte_pointer) &x, sizeof(void *));
  printf("was a pointer \n");
}

int main(int argc, char *argv[]) {
  int ival = atoi(argv[1]);
  float fval = (float) ival;
  int *pval = &ival;

  show_int(ival);
  show_float(fval);
  show_pointer(pval);

  return 0;
}
