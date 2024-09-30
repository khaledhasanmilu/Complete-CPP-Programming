#include<iostream>
using namespace std;
void ThreeNumberMax(int &x,int &y,int &z) {
    if(x>=y &x>=z) {
        cout <<x <<" is greater than "<<y<<" and "<< z<< endl;
    }
    else if(x<=y &y>=z) {
        cout <<y <<" is greater than "<<x<<" and "<< z<< endl;
    }
    else
        cout <<z <<" is greater than "<<x<<" and "<< y<< endl;

}

int main()
{
    int a,b,c;
    cout << "Enter the value of a,b and c:";
    cin >> a>>b>>c;
    ThreeNumberMax(a,b,c);
    return 0;
}