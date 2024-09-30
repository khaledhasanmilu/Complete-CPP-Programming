#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an odd number (n): ";
    cin >> n;

    int size = 2 * n - 1;  // Size of the square

    // Loop through the rows
    for (int i = 0; i < size; i++) {
        // Loop through the columns
        for (int j = 0; j < size; j++) {
            // Condition to print stars for the diamond outline
            if (i + j <= (n - 1) || j - i >= (n - 1) || i - j >= (n - 1) || i + j >= (3 * (n - 1))) {
                cout << "* ";
            } else {
                cout << "  ";  // Space for the hollow part
            }
        }
        cout << endl;
    }

    return 0;
}
