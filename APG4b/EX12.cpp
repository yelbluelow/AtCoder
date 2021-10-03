#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int sum = 1;

    for (int i = 0; i < S.size(); i++) {
        char c = S.at(i);
        if (c == '+') {
            sum ++;
        } else if (c == '-') {
            sum --;
        }
    }
    cout << sum << endl;
}
