#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    int* arr2 = new int[m];
    for (int i = 0; i < m; i++) {
        if (i < n) {
            arr2[i] = arr[i];
        } else {
            cin >> arr2[i];
        }
    }

    delete[] arr;
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    delete[] arr2;
    return 0;
}
