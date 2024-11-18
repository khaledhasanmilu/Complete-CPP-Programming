#include<bits/stdc++.h>
using namespace std;
int* p;
void fun(){
    int* x = new int;  // declare dynamic
    *x = 10;
    p = x;
    cout<<"Fun fuunction: "<<*p<<endl;
    return;
}
int main()
{
   fun();
   cout<<"Main Function: "<<*p<<endl;
 return 0;
}
