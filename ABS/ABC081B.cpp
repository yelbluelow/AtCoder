#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }
    int count = 0;
    bool flg = true;

    while (flg) {
        for (int i = 0; i < n; i++) {
            if (a.at(i) % 2 == 0) {
                a.at(i) /= 2;
            } else {
                flg = false;
            }
        }
        if (flg) {
            count ++;
        }
    }

    cout << count << endl;
    return 0;
}
