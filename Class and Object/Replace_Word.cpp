#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    for (int i = 0; i < T; ++i) {
        string S;
        getline(cin, S);
        size_t l = S.find_last_of(' ');
        string X = S.substr(l + 1);
        S = S.substr(0, l);

        size_t pos = 0;
        while ((pos = S.find(X, pos)) != string::npos) {
            S.replace(pos, X.length(), "#");
            pos += 1;
        }

        cout << S << endl;
    }

    return 0;
}