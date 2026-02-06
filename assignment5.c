/*
 * Use malloc() to allocate memory for an integer.
 * Assign a value to the allocated memory and print it.
 * Use malloc() to allocate memory for an array of 5 integers.
 * Populate the array using pointer arithmetic and print the values.
 * Free all allocated memory.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int* num = (int*)malloc(sizeof(int));

  if (num == NULL) {
    return 1;
  }

  *num = 99;
  printf("Allocated integer value: %d\n", *num);

  int* arr = (int*)malloc(5 * sizeof(int));

  if (arr == NULL) {
    free(num);
    return 1;
  }

  for (int i = 0; i < 5; ++i) {
    *(arr + i) = (i + 1) * 10;
  }

  printf("Allocated array values:\n");
  for (int i = 0; i < 5; ++i) {
    printf("%d ", *(arr + i));
  }
  printf("\n");

  free(num);
  free(arr);

  return 0;
}
