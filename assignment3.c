/*
 * Write a function swap(int *a, int *b) that swaps two integer values using pointers.
 * In the main() function, call swap() and pass the addresses of two integers.
 * Print the values of the integers before and after the swap.
 */

#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int x = 10;
  int y = 20;

  printf("Before swap:\n");
  printf("x = %d, y = %d\n", x, y);

  swap(&x, &y);

  printf("After swap:\n");
  printf("x = %d, y = %d\n", x, y);

  return 0;
}
