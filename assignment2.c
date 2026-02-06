/*
 * Declare an array of integers and initialize it with 5 values.
 * Use a pointer to traverse the array and print each element.
 * Modify the values of the array using pointer arithmetic.
 * Print the modified array using both the pointer and the array name.
 */

#include <stdio.h>

#define SIZE 5

int main() {
  int arr[SIZE] = {10, 20, 30, 40, 50};
  int *ptr = arr;

  printf("Original array:");
  for (int i = 0; i < SIZE; ++i) {
      printf(" %d", *(ptr + i));
  }
  printf("\n");

  for (int i = 0; i < SIZE; ++i) {
    *(ptr + i) += 5;
  }

  printf("Modified array (using pointer):");
  for (int i = 0; i < SIZE; ++i) {
      printf(" %d", *(ptr + i));
  }
  printf("\n");

  printf("Modified array (using array name):");
  for (int i = 0; i < SIZE; ++i) {
      printf(" %d", arr[i]);
  }
  printf("\n");

  return 0;
}
