# HPC Homework 1 - Summary

## Tasks Completed

1. **Integer pointer basics**
   - Declare an integer and a pointer to it.
   - Print the address using both the variable and the pointer.
   - Modify the value through the pointer.

**Example Output:**
```
Value of ptr: 0x7ffee4b6a9ac, address of i: 0x7ffee4b6a9ac
New value of i: 7
```


2. **Array traversal using pointers**
- Declare an integer array of 5 elements.
- Traverse and print the array using a pointer.
- Modify the array elements using pointer arithmetic.
- Print the modified array using both the pointer and array name.

**Example Output:**
```
Original array: 10 20 30 40 50
Modified array (using pointer): 15 25 35 45 55
Modified array (using array name): 15 25 35 45 55
```


3. **Swap two integers using pointers**
- Implement `swap(int* a, int* b)` using a temporary variable.
- Call `swap()` and print values before and after swapping.

**Example Output:**
```
Before swap:
x = 10, y = 20
After swap:
x = 20, y = 10
```


4. **Pointer to pointer demonstration**
- Declare an integer and a pointer to it.
- Declare a pointer to the pointer.
- Print the value using both the pointer and double pointer.

**Example Output:**
```
Using pointer: 42
Using double pointer: 42
```


5. **Dynamic memory allocation using `malloc()`**
- Allocate memory for a single integer and assign a value.
- Allocate memory for an array of 5 integers.
- Populate and print the array using pointer arithmetic.
- Free allocated memory.

**Example Output:**
```
Allocated integer value: 99
Allocated array values:
10 20 30 40 50
```


6. **String traversal and length calculation**
- Assign a string literal to a character pointer.
- Traverse and print the string character by character.
- Implement `str_length(char* str)` using pointer arithmetic.
- Accept a user-provided string and print its length.

**Example Output:**
```
String literal: Hello, World!
Enter a string: hello
String length: 5
```


7. **Array of strings (array of character pointers)**
- Declare an array of string literals.
- Print each string using pointer notation.
- Modify one string by pointer reassignment and print the updated array.

**Example Output:**
```
Original strings:
Welcome
To
C
World

Modified strings:
Welcome
Modified
C
World
```
