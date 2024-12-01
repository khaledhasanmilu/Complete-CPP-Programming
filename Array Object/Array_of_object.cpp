#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
};

int main() {
    int n;
    cin >> n;
    cin.ignore();  // This clears the input buffer after reading integer n
    Student arr[n];

    for (int i = 0; i < n; i++) {
        getline(cin, arr[i].name);  // Input name
        cin >> arr[i].roll >> arr[i].marks;  // Input roll and marks
        cin.ignore();  // Clear the input buffer for the next getline
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}
