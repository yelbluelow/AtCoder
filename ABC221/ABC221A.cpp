#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, result;
    cin >> A >> B;

    if (A == B) {
        result = 1;
    } else {
        result = pow(32, A - B);
    }

    cout << result << endl;
}
