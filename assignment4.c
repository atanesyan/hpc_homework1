/*
 * Declare an integer variable and a pointer to that variable.
 * Declare a pointer to the pointer and initialize it.
 * Print the value of the integer using both the pointer and the double-pointer.
 */

#include <stdio.h>

int main() {
  int value = 42;
  int *ptr = &value;
  int **dptr = &ptr;

  printf("Using pointer: %d\n", *ptr);
  printf("Using double pointer: %d\n", **dptr);

  return 0;
}
