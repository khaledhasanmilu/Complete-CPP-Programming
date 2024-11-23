#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char s[n];
    cin >> s;
    int a_count = 0, d_count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'A')
        {
            a_count++;
        }
        else
        {
            d_count++;
        }
    }
    if (a_count > d_count)
    {
        cout << "Anton" << endl;
    }
    else if (a_count < d_count)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}