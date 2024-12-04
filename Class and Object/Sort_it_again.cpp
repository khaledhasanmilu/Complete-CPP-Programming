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

};

bool cmp(Student l, Student r)
{
 
    if (l.english_marks != r.english_marks)
        return l.english_marks > r.english_marks; // Descending order of English marks
    if (l.math_marks != r.math_marks)
        return l.math_marks > r.math_marks; // Descending order of Math marks
    return l.id < r.id; // Ascending order of ID
}

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].secton >> arr[i].id >> arr[i].math_marks >> arr[i].english_marks;
    
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].secton << " " 
             << arr[i].id << " " << arr[i].math_marks << " " << arr[i].english_marks << endl;
    }
    return 0;
}
