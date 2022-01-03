#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, y;
    cin >> n >> y;
    int ai = n;
    int bi = 0;
    int ci = 0;
    bool flg = false;

    while (!flg && ai > -1) {
        bi = n - ai;
        while (!flg && bi > -1) {
            ci = n - ai - bi;
            if (10000*ai + 5000*bi + 1000*ci == y) {
                flg = true;
                break;
            } else if (10000*ai + 5000*bi + 1000*ci < y) {
                break;
            }
            bi -= 1;
        }
        if (flg) {
            break;
        }
        ai -= 1;
    }

    if (flg) {
        cout << ai << " " << bi << " " << ci << endl;
    } else {
        cout << -1 << " " << -1 << " " << -1 << endl;
    }

    return 0;
}
