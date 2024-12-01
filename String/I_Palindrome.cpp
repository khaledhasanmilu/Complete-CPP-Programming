#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   string rv = s;
  reverse(s.begin(),s.end());
  if(rv==s){
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
  
 return 0;
}