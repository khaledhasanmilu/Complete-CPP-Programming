#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int even_count = 0, odd_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }
        if (even_count == odd_count)
        {
            cout << "0" << endl;
        }
        else
        {
            int difference = abs(even_count - odd_count);
            if (difference % 2 != 0)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << difference / 2 << endl;
            }
        }
    }

    return 0;
}