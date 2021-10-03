#include <bits/stdc++.h>
using namespace std;

int main() {
    long N, X;
    cin >> N;
    vector<long> A(N);
    long A_sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
        A_sum += A.at(i);
    }
    cin >> X;

    long q = X / A_sum;
    long B_sum = A_sum * q;
    for (int i = 0; i < N; i++) {
        if (X < B_sum + A.at(i)) {
            cout << N * q + i + 1;
            break;
        }
        B_sum += A.at(i);
    }
}
