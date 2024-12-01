#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin>>s;
        for (int i = 0; i < s.size()-2; i++)
        {
            if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')
            {
                cout << "Good" << endl;
                break;
            }
            else if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')
            {
                cout << "Good" << endl;
                break;
            }
            else
            {
                cout<<"Bad"<<endl;
                break;
            }
            
        }
    }

    return 0;
}