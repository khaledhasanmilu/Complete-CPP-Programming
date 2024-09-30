#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your Marks: ";
    cin >> marks;

    if (marks <= 100 && marks >= 90)
        cout << "A+ Grade" << endl;
    else if (marks < 90 && marks >= 80)
        cout << "A Grade" << endl;
    else if (marks < 80 && marks >= 70)
        cout << "B Grade" << endl;
    else if (marks < 70 && marks >= 60)
        cout << "C Grade" << endl;
    else if (marks < 60 && marks >= 50)
        cout << "D Grade" << endl;
    else
        cout << "F Failed" << endl;

    return 0;
}
