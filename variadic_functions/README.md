# Variadic Functions in C

## Description
This project explores the implementation of variadic functions in C programming. Variadic functions are functions that can accept a variable number of arguments, such as printf().

## Files
* [variadic_functions.h](./variadic_functions.h) - Header file containing function prototypes and structures
* [0-sum_them_all.c](./0-sum_them_all.c) - Function that returns the sum of all its parameters
* [1-print_numbers.c](./1-print_numbers.c) - Function that prints numbers with a separator
* [2-print_strings.c](./2-print_strings.c) - Function that prints strings with a separator
* [3-print_all.c](./3-print_all.c) - Function that prints anything based on a format string

## Function Descriptions

## `sum_them_all`
* Prototype: `int sum_them_all(const unsigned int n, ...)`
* Returns sum of all parameters
* Returns 0 if n == 0

### Compilation
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
```

## `print_numbers`
* Prototype: `void print_numbers(const char *separator, const unsigned int n, ...)`
* Prints numbers followed by separator
* Does not print separator if NULL

### Compilation
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
```

## `print_strings`
* Prototype: `void print_strings(const char *separator, const unsigned int n, ...)`
* Prints strings followed by separator
* Prints (nil) if string is NULL

### Compilation
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
```

## `print_all`
* Prototype: `void print_all(const char * const format, ...)`
* Prints any combination of char, integer, float and string
* Format specifiers: c (char), i (integer), f (float), s (string)

### Compilation
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d
```

## Author

This project was created by Sebastien
