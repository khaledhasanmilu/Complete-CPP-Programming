#include <iostream>
using namespace std; // we use switch
int main()
{
    char ch;
    float num1, num2;
    cout << "Choose any choice(+,-,*,/): ";
    cin >> ch;
    cout << "Enter two value(num1 > num2): ";
    cin >> num1 >> num2;
    switch (ch)
    {
    case '+':
        cout << "Sum: " << num1 + num2 << "." << endl;
        break;
    case '-':
        cout << "Substraction: " << num1 - num2 << "." << endl;
        break;
    case '*':
        cout << "Multiplication: " << num1 * num2 << "." << endl;
        break;
    case '/':
        cout << "Division: " << num1 / num2 << "." << endl;
        break;

    default:
        break;
    }

    return 0;
}