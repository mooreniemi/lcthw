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
#include <string.h>
#define MAX_STRING_LEN 80

// http://www.c4learn.com/c-programs/c-program-to-implement-binary-search-tree-traversal.html
// http://www.sparknotes.com/cs/trees/implementation/section2.rhtml

// http://stackoverflow.com/questions/612328/difference-between-struct-and-typedef-struct-in-c
// typedef (struct <struct name> {}) <name of type>;
typedef struct _tree {
  char data[MAX_STRING_LEN];
  struct _tree *left, *right;
} tree_t;

int main(int argc, char *argv[]) {
  tree_t my_tree, left_child, right_child;

  // http://stackoverflow.com/a/10088684/1791856
  strncpy(left_child.data, "hi from a tree :)", sizeof(left_child.data));

  // my_tree.left->data is the same variable as left_child.data.
  my_tree.left = &left_child;
  my_tree.right = &right_child;

  printf("%s\n", my_tree.left -> data);
  return 0;
}
