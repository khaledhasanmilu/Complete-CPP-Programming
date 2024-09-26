#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter any number: ";
    if (cin >> x)       //this is used for some cases like if i input a letter then 
                        //cin fails for detect it as a integer. That time it will be count as 0. 
                        //So it give us a result even for count o. 
    {
        if (x % 2 == 0)
        {
            cout << "Your input is Even." << endl;
        }
        else if (x % 2 != 0)
        {
            cout << "Your input is odd." << endl;
        }
    }

    else
    {
        cout << "Special Charecter." << endl;
    }

    return 0;
}
