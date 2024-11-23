#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello world";
    // string s2 = "hi";
    // s[5]='a';  //this is not working because its provide a array not acces last 5 no index
    // s +=s2;           //append another string
    // s.append(s2);    //another approach
    // s.push_back('B'); // single value add in last
    // s+='b';       //same
    // s.pop_back();  //remove last charecter
    // string s3 = "hi";
    // s3.assign("gello"); //assign value in a data
    // s.erase(3);           //3 er por baki sob felay dicchi
    //s.erase(3, 2); // 3 er por 2 ta delete kore
    //s.replace(6,5,"bangladesh"); //(index,koyta charecter delete,ki add korbo)
    //s.replace(6,0,"bangladesh"); //6 er por bangladesh boshabe
    s.insert(5,"khalid");       //5 er por insert korbe
    cout << s << endl;
    // cout<<s3<<endl;
    return 0;
}