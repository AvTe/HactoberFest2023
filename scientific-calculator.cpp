#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    cout << "Simple Scientific Calculator\n";
    cout << "Enter an operation (+, -, *, /, sqrt, pow): ";
    cin >> operation;

    switch (operation) {
        case '+':
        case '-':
        case '*':
        case '/':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            switch (operation) {
                case '+':
                    result = num1 + num2;
                    break;
                case '-':
                    result = num1 - num2;
                    break;
                case '*':
                    result = num1 * num2;
                    break;
                case '/':
                    if (num2 == 0) {
                        cout << "Error: Division by zero\n";
                        return 1;
                    }
                    result = num1 / num2;
                    break;
            }
            cout << "Result: " << result << endl;
            break;
        case 's':
        case 'S':
            cout << "Enter a number to find the square root: ";
            cin >> num1;
            if (num1 < 0) {
                cout << "Error: Cannot find the square root of a negative number\n";
                return 1;
            }
            result = sqrt(num1);
            cout << "Square root: " << result << endl;
            break;
        case 'p':
        case 'P':
            cout << "Enter a base and exponent: ";
            cin >> num1 >> num2;
            result = pow(num1, num2);
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Error: Invalid operation\n";
            return 1;
    }

    return 0;
}
