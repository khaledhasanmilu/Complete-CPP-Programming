// #include <bits/stdc++.h>   //whole library function is here in this bits/stdc++.h header file.
#include <iostream>
#include <algorithm> //for use reverse we need this header file
using namespace std;
int main()
{
    string str;
    cout << "Enter any String: ";
    getline(cin, str);
    reverse(str.begin(), str.end());
    cout << "Reverse String: " << str << endl;
}