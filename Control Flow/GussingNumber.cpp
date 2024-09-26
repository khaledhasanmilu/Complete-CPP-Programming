#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int randomNum = rand() % 10 + 1;
    int guess;
    cout << "Guess a number(1 to 10): ";
    cin >> guess;
    if (guess == randomNum)
    {
        cout << "Congratulations! You did it." << endl;
    }
    else if (randomNum < guess)
    {
        cout << "It's too high! The Random Number is: " << randomNum << "." << endl;
    }
    else if (randomNum > guess)
    {
        cout << "It's too low! The Random Number is: " << randomNum << "." << endl;
    }

    return 0;
}