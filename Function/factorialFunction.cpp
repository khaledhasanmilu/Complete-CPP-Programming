#include <iostream>
using namespace std;
int Factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * Factorial(n - 1);
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int result = Factorial(n);
    cout << "Factorial of " << n << "! = : " << result << endl;
    return 0;
}