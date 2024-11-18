#include <bits/stdc++.h>
using namespace std;

int* get_array(int n) {
    int* arr = new int[n];  // Dynamically allocate an array of size `n`
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Take array input
    }
    return arr;  // Return the pointer to the array
}

int main() {
    int n;
    cin >> n;  // Input the size of the array

    int* x = get_array(n);  // Call the function to get the array
    for (int i = 0; i < n; i++) {  // Print the elements of the array
        cout << x[i] << " ";
    }
    cout << endl;

    delete[] x;  // Free the dynamically allocated memory
    return 0;
}
