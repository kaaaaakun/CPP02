# Fixed Point Number Class

This repository contains the implementation of a Fixed Point Number class named `Fixed` in C++. The `Fixed` class represents a fixed-point number with 8 fractional bits, allowing for precise arithmetic operations.

## Files

- `Fixed.hpp`: Header file containing the declaration of the `Fixed` class.
- `Fixed.cpp`: Source file containing the implementation of the `Fixed` class methods.
- `main.cpp`: Example usage of the `Fixed` class with various arithmetic operations.
- `color.hpp`: Header file defining color codes for console output.
- `Makefile`: Makefile for compiling the project.


## Overview

The `Fixed` class provides the following functionality:

- Construction from integer and float values.
- Overloaded arithmetic operators (+, -, *, /).
- Comparison operators (>, <, >=, <=, ==, !=).
- Increment and decrement operators (++, --).
- Static member functions for finding the minimum and maximum of two `Fixed` objects.

## Example

```cpp
#include "Fixed.hpp"
#include <iostream>

int main() {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << "a: " << a << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;

    // Additional tests and output...

    return 0;
}
