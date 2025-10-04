#include <iostream>
using namespace std;

int main()
{
    cout << "******************************************************** CALCULATOR******************************************************** \n\n";

    char op;
    float num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> num2;

    switch (op) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        if (num2 == 0)
            cout << "Error";
        else
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    default:
        cout << "Enter ! TheNot Correct";
    }

    cout << "\n#";

    return 0;
}
