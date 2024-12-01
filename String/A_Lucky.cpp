#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < 3; i++)
        {
            sum1 += s[i];
        }
        for (int i = 3; i < 6; i++)
        {
            sum2 += s[i];
        }
        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}