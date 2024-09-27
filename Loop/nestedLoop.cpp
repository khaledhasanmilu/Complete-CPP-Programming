#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 2; i++)
    {
        cout << "Outer Loop: " << i<<endl;
        for (int j = 1; j <= 3; j++)
        {
            cout << "Inner Loop: " << j <<endl;
        }
    }
    cout << endl;

    return 0;
}