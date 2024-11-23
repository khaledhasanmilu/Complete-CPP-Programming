#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin, s);
  cout << s << endl;
  stringstream ss(s);  //ss is a object of s
  string word;
  // ss >> word;
  // cout << word << endl;
  // ss >> word;
  // cout << word << endl;
  // ss >> word;
  // cout << word << endl;
  // ss >> word;
  // cout << word << endl;
  int count =0;
  while (ss>>word)
  {
    cout<<word<<endl;
    count++;
  }
  cout<<count<<endl;
  return 0;
}