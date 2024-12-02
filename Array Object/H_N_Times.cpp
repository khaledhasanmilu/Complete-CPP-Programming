#include <bits/stdc++.h>
using namespace std;
void fun(int n)
{
    while (n--)
    {
        int n;
        char ch;
        cin >> n >> ch;
        for (int i = 0; i < n; i++)
        {
            cout << ch;
            if (i < n)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    fun(n);

    return 0;
}