#include <iostream>

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    int subtract(int a, int b) {
        return a - b;
    }
    int multiply(int a, int b) {
        return a * b;
    }
    float divide(int a, int b) {
        if (b != 0) {
            return static_cast<float>(a) / b;
        } else {
            cout << "Error: Division by zero";
            return 0;
        }
    }
};
int main() {
    Calculator calc;
    int num1, num2; 
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Addition: " << calc.add(num1, num2) << std::endl;
    cout << "Subtraction: " << calc.subtract(num1, num2) << std::endl;
    cout << "Multiplication: " << calc.multiply(num1, num2) << std::endl;
    cout << "Division: " << calc.divide(num1, num2) << std::endl;
    return 0;
}


