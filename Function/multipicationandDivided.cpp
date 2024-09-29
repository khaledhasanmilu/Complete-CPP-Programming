//Here i use two function for print division and multiplication.One is return type and another is non return type.
#include <iostream>
using namespace std;
int multiplication(int x, int y)
{
    int multi = x * y;
    return multi;
}
void divided(int a, int b)
{
    if (a > b)
    {
        int dive = a / b;
        cout << "DIvided value: " << dive << endl;
    }
    else
    {
        cout << "Please make sure that you first input is greater than your second input." << endl;
    }
}
int main()
{
    int m, l;
    cout << "Enter the value of m and l: ";
    cin >> m >> l;
    int result = multiplication(m, l);
    cout << "Division of two numbers: " << result << endl;
    divided(m, l);
    return 0;
}