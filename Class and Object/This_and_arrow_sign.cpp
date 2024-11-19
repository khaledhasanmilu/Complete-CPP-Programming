#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int clas;
    double gpa;
    Student(int r, int c, double g)
    {
       this->roll = r;
        this->clas = c;
        this->gpa = g;
    }
};
int main()
{
    int r,c;
    double g;
    cin>>r>>c>>g;
    Student rahim(r,c,g);
    //Student karim(r,c,g);
    cout << rahim.roll << " " << rahim.clas << " " << rahim.gpa << endl;
    //cout << karim.roll << " " << karim.clas << " " << karim.gpa << endl;

    return 0;
}