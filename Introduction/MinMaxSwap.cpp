#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "MIN: " << min(a, b) << endl;
    cout << "MAX: " << max(a, b) << endl;

    swap(a, b); // Swapping values of a and b
    cout << "After SWAP:" << endl;
    cout << "a: " << a << ", b: " << b << endl;

    return 0;
}
