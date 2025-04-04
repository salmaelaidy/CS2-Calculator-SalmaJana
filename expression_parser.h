#ifndef EXPRESSION_PARSER_H
#define EXPRESSION_PARSER_H

#include <string>
#include <stack>
#include <queue>
#include <map>
#include <cctype>
#include <stdexcept>

using namespace std;

int precedence(char op);
bool is_operator(char c);
bool is_digit(char c);
queue<string> infix_to_postfix(const string& expr);
double evaluate_postfix(queue<string>& postfix);

double evaluate_expression(const string& expr);

#endif
