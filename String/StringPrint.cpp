#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter any String: ";
    getline(cin, s); // full string input with spaces
    // cin >> s;      //JUST FIRST STRING INPUT AND OUTPUT
    cout << "Your String: " << s << endl;

    return 0;
}
