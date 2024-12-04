#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    string x = "Jessica";
    int flag = 0;
    while (ss >> word)
    {
        if (word == x)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}