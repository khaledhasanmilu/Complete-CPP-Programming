#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter any number for check: ";
    cin >> x;
    if (x > 0)
    {
        cout << "Positive" << endl;
    }
    else if (x < 0)
    {
        cout << "Negative." << endl;
    }
    else
    {
        cout << "Zero." << endl;
    }

    return 0;
}