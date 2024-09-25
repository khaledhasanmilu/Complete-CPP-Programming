#include <iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter any String: ";
    getline(cin, str);
    cout << "Your String length: " << str.length() << endl; //count all space and letter;
    return 0;
}