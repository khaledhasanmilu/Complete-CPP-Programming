#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }
    Student Min;
    Min.marks = INT_MAX;
    //Min.marks = INT_MIN;   --for  max


    for (int i = 0; i < n; i++)
    {
           if (arr[i].marks<Min.marks)
           //if (arr[i].marks<Min.marks) ----for maxx
           {
            Min = arr[i];
           }
           
    }
    cout<<Min.name<<" "<<Min.roll<<" "<<Min.marks<<endl;

    return 0;
}