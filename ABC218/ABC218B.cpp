#include <bits/stdc++.h>
using namespace std;

int main() {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    vector<int> P(26);
    for (int i = 0; i < 26; i++) {
        cin >> P.at(i);
    }

    for (int i : P) {
        cout << alphabet.at(i - 1);
    }
    cout << endl;
}
