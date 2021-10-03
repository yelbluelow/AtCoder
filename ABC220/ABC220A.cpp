#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int num = C;
    int i = 1;
    bool flg = false;

    while (B >= num) {
        if (A <= num) {
            flg = true;
            break;
        }
        num = C * i;
        i++;
    }

    if (flg) {
        cout << num << endl;
    } else {
        cout << -1 << endl;
    }
}
