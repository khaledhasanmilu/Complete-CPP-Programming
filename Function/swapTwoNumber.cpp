#include <iostream>
using namespace std;
void SwapTwoNumber(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
  
}
int main()
{
    int a, b;
    cout << "Enter the value off a and b: ";
    cin >> a >> b;
    cout << "Your orginal value: " << a << " " << b << endl;
    SwapTwoNumber(a, b);
    cout << "Now Swap Value : " << a << " " << b << endl;

    return 0;
}