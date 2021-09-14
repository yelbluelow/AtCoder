#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, max, max_count;
    cin >> N;
    max = -1;
    max_count = 0;

    map<int, int> A;
    for (int i; i < N; i++) {
        int a;
        cin >> a;
        if (A.count(a)) {
            A[a] += 1;
        } else {
            A[a] = 1;
        }

        if (A.at(a) > max_count) {
            max = a;
            max_count = A.at(a);
        }
    }

    cout << max << " " << max_count << endl;
}
