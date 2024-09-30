#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the value of x(1/2): ";
    cin>>x;
    if (x == 1)
    {
        bool CoxsBazarTour = true;
        if (CoxsBazarTour)
        {
            cout << "Yea we are going Cox's Bazar." << endl;
        }
        else
        {
            cout << "We are going Nodir par." << endl;
        }
    }
    else if (x == 2)
    {
        bool SaintMartin = true;
        if (SaintMartin)
        {
            cout << "Yeah we are going to Sainmartin." << endl;
        }
        else
        {
            cout << "We are going biler par." << endl;
        }
    }
    else
    {
        cout << "You are Goribs, Don't need to go outside." << endl;
    }

    return 0;
}