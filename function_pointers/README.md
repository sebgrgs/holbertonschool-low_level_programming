# Function Pointers

This directory contains examples and exercises related to function pointers in C. Function pointers are pointers that point to the address of a function, allowing for dynamic function calls and more flexible code structures.

## Concepts Covered

- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer point to in the virtual memory

## Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called function_pointers.h
- Don’t forget to push your header file
- All your header files should be include guarded

## Files

- [`0-print_name.c`](0-print_name.c): Function that prints a name using a function pointer.
- [`1-array_iterator.c`](1-array_iterator.c): Function that executes a function given as a parameter on each element of an array.
- [`2-int_index.c`](2-int_index.c): Function that searches for an integer in an array using a function pointer.
- [`3-calc.h`](3-calc.h): Header file containing the structure and function prototypes for a simple calculator.
- [`3-get_op_func.c`](3-get_op_func.c): Function that selects the correct function to perform the operation asked by the user.
- [`3-main.c`](3-main.c): Main function that performs simple operations using function pointers.
- [`3-op_functions.c`](3-op_functions.c): Functions that perform basic arithmetic operations (addition, subtraction, multiplication, division, and modulus).

## Usage

To compile and run the examples, use the following commands:

```sh
gcc -o print_name
./print_name

gcc -o array_iterator
./array_iterator

gcc -o int_index
./int_index

gcc -o calc
./calc
```

## Author

This project was created by Sebastien.