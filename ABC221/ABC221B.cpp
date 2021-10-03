#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    int count = 0;

    if (S != T) {
        for (int i = 0; i < S.size(); i++) {
            if (S.at(i) != T.at(i)) {
                if (i != S.size() - 1 && count == 0 && S.at(i) == T.at(i + 1)) {
                    count++;
                } else if (count == 1 && S.at(i) == T.at(i - 1)) {
                    count++;
                } else {
                    count = 3;
                    cout << "No" << endl;
                    break;
                }
            }
        }
    }
    if (count < 3) {
        cout << "Yes" << endl;
    }
}
