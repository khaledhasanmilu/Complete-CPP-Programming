#include<bits/stdc++.h>
using namespace std;
int main()
{
   int *arr = new int[3]; 
   for (int i = 0; i < 3; i++)
   {
    cin>>arr[i];
   }
   int *b=new int[5];
   for (int i = 0; i < 5; i++)
   {
    b[i]=arr[i];
   }
   b[3]=40;
   b[4]=50;
   delete[] arr; 
   for (int i = 0; i < 5; i++)
   {
    cout<<b[i]<<" ";
   }
   
   
 return 0;
}