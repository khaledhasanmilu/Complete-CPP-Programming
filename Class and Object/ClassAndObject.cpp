#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100]; // 100 byte
    int roll;       // 4 byte
    double cgpa;    // 8 byte
};
int main()
{
    Student a, b;
    cin.getline(a.name, 100); // input largest name
    cin >> a.roll >> a.cgpa;
    cin.ignore(); // ignore space or enter
    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;
    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;
    return 0;
}