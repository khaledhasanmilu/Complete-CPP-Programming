#include<bits/stdc++.h>
using namespace std;
int* fun(){
   int *arr = new int[5];      //dynamic array declare
   for (int i = 0; i < 5; i++)
   {
    cin>>arr[i];
   }
    
    return arr; // integer pointer
}
int main()
{
 int* x =  fun(); 
for (int i = 0; i < 5; i++)
{
     cout<< x[i]<<" "; //it works hihi...
}

 return 0;
}