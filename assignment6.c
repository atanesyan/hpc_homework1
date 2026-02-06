/*
 * Declare a character pointer and assign it a string literal.
 * Use a pointer to traverse and print the string character by character.
 * Write a function str_length(char *str) that calculates the length of a string using pointer arithmetic.
 * Call str_length() in main() and print the length of a user-provided string.
 */

#include <stdio.h>

int str_length(char* str) {
  char* p = str;
  while (*p) ++p;
  return p - str;
}

int main() {
  char *literal = "Hello, World!";
  char *p = literal;

  printf("String literal: ");
  while (*p != '\0') {
    printf("%c", *p);
    ++p;
  }
  printf("\n");

  char input[100];
  printf("Enter a string: ");
  scanf("%99s", input);

  int len = str_length(input);
  printf("String length: %d\n", len);

  return 0;
}
