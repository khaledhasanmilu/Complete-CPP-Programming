#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;       // normally its use stack memory
    int *p = new int;  //heap memory.. new for declare daynamic for size increase and use 
    *p = 100;
    cout<<"Daynamic value: "<< *p <<endl;
   
 return 0;
} 
