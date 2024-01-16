#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char operation;
    cout << "Simple Calculator\n";
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;
    switch (operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is undefined.\n";
            }
            break;
        default:
            cout << "Invalid operation. Please choose +, -, *, or /.\n";
            break;
    }
    return 0;
}
