#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    char choice;

    do {
        cout << "\n===== Advanced Calculator =====\n";
        cout << "Operations Available:\n";
        cout << "+  -> Addition\n";
        cout << "-  -> Subtraction\n";
        cout << "*  -> Multiplication\n";
        cout << "/  -> Division\n";
        cout << "%  -> Percentage (num1 % of num2)\n";

        cout << "\nEnter first number: ";
        cin >> num1;

        cout << "Enter operator: ";
        cin >> operation;

        cout << "Enter second number: ";
        cin >> num2;

        switch(operation) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;

            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;

            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;

            case '/':
                if(num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error! Division by zero is not allowed.\n";
                break;

            case '%':
                cout << "Result: " << (num1 * num2) / 100 << endl;
                break;

            default:
                cout << "Invalid operator!\n";
        }

        cout << "\nDo you want to calculate again? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    cout << "\nThank you for using the calculator 😎\n";

    return 0;
}