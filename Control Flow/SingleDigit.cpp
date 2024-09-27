#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value off N:";
    cin>>n;
    int   a= n % 10;
    cout<<a<<endl;
    int b = (floor)(n/10);
    //cout<<"Total Number: "<<b<<endl;
    int c = b % 10;
    cout<<c<<endl;
    int d = (floor)(n/100);
    //cout<<"Total Number: "<<d<<endl;
    int e = d % 10;
    cout << e<< endl;
    int f = (floor)(n/1000);
    cout <<f << endl;

    return 0;
}