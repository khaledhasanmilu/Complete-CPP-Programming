#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    //convert all of this upper case
    for (char &c : s) {
        c = toupper(c);
    }

    int E = 0, G = 0, Y = 0, P = 0, T = 0;
    for (char c : s) {
        if (c == 'E') E++;
        else if (c == 'G') G++;
        else if (c == 'Y') Y++;
        else if (c == 'P') P++;
        else if (c == 'T') T++;
    }

    int egypt_count = min({E, G, Y, P, T});

    cout << egypt_count << endl;

    return 0;
}
