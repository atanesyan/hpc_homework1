/*
 * Declare an integer variable and initialize it with a value.
 * Declare a pointer variable that points to the integer.
 * Print the address of the integer variable using both the variable and the pointer.
 * Modify the value of the integer using the pointer and print the new value.
 */

#include <stdio.h>

int main() {
  int i = 10;
  int* ptr = &i;
  printf("Value of ptr: %p, address of i: %p\n", ptr, &i);
  *ptr = 7;
  printf("New value of i: %d\n", i);

  return 0;
}
