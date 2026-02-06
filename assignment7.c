/*
 * Declare an array of strings using an array of character pointers.
 * Print each string using pointer notation.
 * Modify one of the strings and print the updated array.
 */

#include <stdio.h>

int main() {
  char* strings[] = {
    "Welcome",
    "To",
    "C",
    "World"
  };

  int count = 4;

  printf("Original strings:\n");
  for (int i = 0; i < count; ++i) {
    char* str = strings[i];
    printf("%s", str);
    printf("\n");
  }

  strings[1] = "Modified";

  printf("\nModified strings:\n");
  for (int i = 0; i < count; ++i) {
    char* str = strings[i];
    printf("%s", str);
    printf("\n");
  }

  return 0;
}
