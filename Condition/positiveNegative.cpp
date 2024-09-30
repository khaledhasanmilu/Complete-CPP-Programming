#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the value of x: ";
    cin >> x;
    if (x > 0)
    {
        cout << "Positive Number." << endl;
    }
    else if (x < 0)
    {
        cout << "Negative Number." << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }

    return 0;
}