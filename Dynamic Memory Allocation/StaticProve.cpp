#include<bits/stdc++.h>
using namespace std;
int* p;
void fun(){
    int x = 10;  // when we return this its autometic deleted for this is static memoryif not working in this vs code go to online compiler.
    p = &x;
    cout<<"Fun fuunction: "<<*p<<endl;
    return;
}
int main()
{
   fun();
   cout<<"Main Function: "<<*p<<endl;
 return 0;
}
//if you run it any online compiler
//you see 10 and 0;
//for avoid you use dynamic memory