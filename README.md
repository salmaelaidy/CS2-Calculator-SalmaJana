# CS2 Calculator
This is a C++ calculator library that implements basic arithmetic operations, as well as additional functions like factorial, GCD, LCM, and random number generation. It also provides a simple test program to demonstrate its functionality.

## Features

- Addition, subtraction, multiplication, and division.
- Factorial, GCD, and LCM calculations.
- Random number generation within a specified range.

## Prerequisites

- C++ compiler (e.g., `g++`).
- CMake (for building the project).
- Git (for version control).

## How to Build and Use

1.Clone the repository to your local machine:

   ```bash
   git clone https://github.com/YourUsername/CS2-Calculator-YourName.git
   cd CS2-Calculator-YourName

Install Dependencies

2.Ensure that CMake is installed on your system. If not, you can install it using the following command (macOS example):
brew install cmake

3.Build the Project

Create a build directory and navigate into it:
mkdir build
cd build
cmake ..
make

4.Run the Calculator
After building the project, you can run the calculator program:
./calculator

5.Example Usage
The calculator will output the results of the following operations:

Addition: 5 + 3
Subtraction: 10 - 4
Multiplication: 3 * 7
Division: 8 / 2
Factorial of 5
GCD of 36 and 60
LCM of 12 and 18
A random number between 1 and 100

6.Modifying the Code
To update or modify any part of the code, simply edit the relevant .cpp or .h files. For example, the random number generation function is located in calculator.cpp.

7.Version Control
Changes to the project should be committed with clear messages:
git add .
git commit -m "Updated random number generation"
git push origin main
