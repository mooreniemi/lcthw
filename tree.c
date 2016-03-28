/*
 * =====================================================================================
 *
 *       Filename:  tree.c
 *
 *    Description:  learning about Tree structures
 *
 *        Version:  1.0
 *        Created:  03/28/2016 17:30:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: Alex
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// http://www.sparknotes.com/cs/trees/implementation/section2.rhtml

// http://stackoverflow.com/questions/612328/difference-between-struct-and-typedef-struct-in-c
// typedef (struct {}) name of type
typedef struct _tree {
  int data;
  struct _tree *left, *right;
} tree_t;

int main(int argc, char *argv[]) {
  tree_t my_tree, left_child, right_child;

  // my_tree.left->data is the same variable as left_child.data.
  my_tree.left = &left_child;
  my_tree.right = &right_child;

  printf("%d\n", my_tree.left -> data);
  return 0;
}
