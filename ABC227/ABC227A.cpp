#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, a;
    cin >> n >> k >> a;
    int result = a - 1;

    for (int i = 0; i < k; i++) {
        if (result == n) {
            result = 1;
        } else {
            result += 1;
        }
    }

    cout << result << endl;
    return 0;
}
