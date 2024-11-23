#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s = "hello";
//    for (int i = 0; i < s.size(); i++)
//    {
//     cout<<s[i]<<endl;
//    }
//iterator diye kono akta string er suru theke sesh porjnto jay
//two typw of iterator --- surute and seshe point kore iterator
// cout<<*s.begin()<<endl; 
// //cout<<*s.end()<<endl;  // null sesher tay ache but seta null
// cout<<*(s.end()-1)<<endl; // last char print
for (auto it=s.begin() ;it < s.end(); it++) // auto/string:: iterator 
{
    cout<<*it<<endl;
}

   
 return 0;
}