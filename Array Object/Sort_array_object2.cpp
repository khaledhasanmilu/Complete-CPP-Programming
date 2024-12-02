#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student l,Student r){
// if (l.marks>r.marks) //max wise sort
// {
//     return true;
// }
// else
// {
//     return false;
// }
return l.marks>r.marks;

}
int main()
{
    int n;
    cin >> n;
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }
    //for sort -- custom compare nedded
    sort(arr,arr+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
    }
    
    return 0;
}
