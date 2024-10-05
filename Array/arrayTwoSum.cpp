include <iostream>
using namespace std;

int main() {
    // Define the size of the arrays
    const int size = 5;

    // Initialize two arrays
    int array1[size] = {1, 2, 3, 4, 5};
    int array2[size] = {6, 7, 8, 9, 10};
    int sumArray[size];

    // Loop through each element of the arrays and sum them
    for (int i = 0; i < size; i++) {
        sumArray[i] = array1[i] + array2[i];
    }

    // Output the result
    cout << "Sum of the two arrays: ";
    for (int i = 0; i < size; i++) {
        cout << sumArray[i] << " ";
    }
    cout << endl;

    return 0;
}