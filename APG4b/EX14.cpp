#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int hmax, hmin;

    hmax = max(max(A, B), C);
    hmin = min(min(A, B), C);
    cout << hmax - hmin << endl;
}
