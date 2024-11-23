#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello world";
    // s.resize(6); //resize the string
    s.resize(20, 'x'); // garbage value
    cout << s << endl;
    return 0;
}