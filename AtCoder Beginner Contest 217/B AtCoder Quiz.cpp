#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    vector<string> contests = {"ABC", "ARC", "AGC", "AHC"};

    for (string co : contests) {
        if (a != co && b != co && c != co) {
            cout << co << endl;
        }
    }
}
