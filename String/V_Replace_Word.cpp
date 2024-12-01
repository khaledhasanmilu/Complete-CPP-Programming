#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    while (1)
    {
        int sb = s.find("EGYPT");
        if (sb != -1)
        {
            s.erase(sb, 5);
            // cout << s << endl;
            s.insert(s.begin() + sb, ' ');
        }
        else
        {
            break;
        }
    }

    cout << s << endl;
    return 0;
}