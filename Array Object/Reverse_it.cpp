#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    string sec;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].sec >> arr[i].id;
    }

    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i].sec, arr[n - i - 1].sec);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].sec << " " << arr[i].id << endl;
    }

    return 0;
}
