#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int ai, count = 0;

    while (500*ai <= x && ai <= a) {
        int bi = 0;
        if (500*ai == x) {
            count++;
            break;
        }
        while (500*ai + 100*bi <= x && bi <= b) {
            if (500*ai + 100*bi == x) {
                count++;
                break;
            } else if ((x - 500*ai - 100*bi) % 50 == 0 && (x - 500*ai - 100*bi) / 50 <= c) {
                count++;
            }
            bi++;
        }
        ai++;
    }

    cout << count << endl;
    return 0;
}
