#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
    cout << "Addition: " << add(5, 3) << endl;
    cout << "Subtraction: " << subtract(10, 4) << endl;
    cout << "Multiplication: " << multiply(3, 7) << endl;
    cout << "Division: " << divide(8, 2) << endl;
    cout << "Factorial: " << factorial(5) << endl;
    cout << "GCD: " << gcd(36, 60) << endl;
    cout << "LCM: " << lcm(12, 18) << endl;
    cout << "Random number: " << randomInRange(1, 100) << endl;
    return 0;
}
