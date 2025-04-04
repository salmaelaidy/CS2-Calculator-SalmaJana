#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "expression_parser.h"

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);
long factorial(int n);
int gcd(int a, int b);
int lcm(int a, int b);
int randomInRange(int min, int max);
double evaluate_expression(const string& expr);

#endif

