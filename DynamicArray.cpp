#include<bits/stdc++.h>
using namespace std;
int main()
{
  //int a[5];  --> its a static array
  int *a = new int[5];
  for (int i = 0; i < 5; i++)
  {
    cin>>a[i];
  }
  for (int i = 0; i < 5; i++)
  {
    cout<< a[i] <<" ";
  }   
 return 0;
}