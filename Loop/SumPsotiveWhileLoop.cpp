#include<bits/stdc++.h>
using namespace std;
int main(){
int n,sum =0;
cout<<"Enter any number: ";
cin>>n;
while (n>=0)    //for all positive number loop will be execute
{
  sum +=n;
  cout<<"Enter a number(without negative): "; 
  cin>>n;
  
}
cout<<"Sum:"<<sum<<endl;
return 0;
}