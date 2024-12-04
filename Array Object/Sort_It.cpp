#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char secton;
    int id;
    int math_marks;
    int english_marks;
    int total_marks;
};

bool cmp(Student l, Student r)
{
    if (l.total_marks == r.total_marks)
        return l.id < r.id;
    return l.total_marks > r.total_marks;
}

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].secton >> arr[i].id >> arr[i].math_marks >> arr[i].english_marks;
        arr[i].total_marks = arr[i].math_marks + arr[i].english_marks;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].secton << " " 
             << arr[i].id << " " << arr[i].math_marks << " " << arr[i].english_marks << endl;
    }
    return 0;
}
