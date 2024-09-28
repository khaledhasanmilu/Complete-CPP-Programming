#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Emter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Total Sum Between 1 to " << n << " : " << sum << endl;

    return 0;
}