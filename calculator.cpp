#include "calculator.h"
#include <iostream>
#include <cstdlib>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
double divide(int a, int b) { return (b != 0) ? (double)a / b : 0; }
long factorial(int n) { return (n <= 1) ? 1 : n * factorial(n - 1); }
int gcd(int a, int b) { return (b == 0) ? a : gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
int randomInRange(int min, int max) { return rand() % (max - min + 1) + min; }

