#include <iostream>
#include <sstream>
#include <stack>
#include <queue>
#include <stdexcept>
#include <string>
#include <cctype>

using namespace std;

queue<string> infix_to_postfix(const string& expr) {
    stack<char> operators;
    queue<string> output;
    stringstream num_buffer;

    for (size_t i = 0; i < expr.length(); i++) {
        char c = expr[i];

        if (isspace(c)) {
            continue;
        }

        if (isdigit(c)) {
            num_buffer << c;
        } else {
            if (num_buffer.tellp() > 0) {
                output.push(num_buffer.str());
                num_buffer.str("");
                num_buffer.clear();
            }

            if (c == '+' || c == '-' || c == '*' || c == '/') {
                while (!operators.empty() && (operators.top() == '*' || operators.top() == '/')) {
                    output.push(string(1, operators.top()));
                    operators.pop();
                }
                operators.push(c);
            } else if (c == '(') {
                operators.push(c);
            } else if (c == ')') {
                while (!operators.empty() && operators.top() != '(') {
                    output.push(string(1, operators.top()));
                    operators.pop();
                }
                operators.pop();
            }
        }
    }

    if (num_buffer.tellp() > 0) {
        output.push(num_buffer.str());
    }

    while (!operators.empty()) {
        output.push(string(1, operators.top()));
        operators.pop();
    }

    return output;
}

double evaluate_postfix(queue<string>& postfix) {
    stack<double> stack;

    while (!postfix.empty()) {
        string token = postfix.front();
        postfix.pop();

        if (isdigit(token[0])) {
            stack.push(stod(token));
        } else {
            double b = stack.top(); stack.pop();
            double a = stack.top(); stack.pop();

            if (token == "+") {
                stack.push(a + b);
            } else if (token == "-") {
                stack.push(a - b);
            } else if (token == "*") {
                stack.push(a * b);
            } else if (token == "/") {
                if (b != 0) {
                    stack.push(a / b);
                } else {
                    throw runtime_error("Division by zero error");
                }
            }
        }
    }

    return stack.top();
}

double evaluate_expression(const string& expr) {
    queue<string> postfix = infix_to_postfix(expr);
    return evaluate_postfix(postfix);
}
