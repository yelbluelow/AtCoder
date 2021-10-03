#include <bits/stdc++.h>
using namespace std;

int main() {
    long K, A, B;
    cin >> K >> A >> B;

    long A_10 = 0;
    long base = 1;
    while(A > 0){
        A_10 = A_10 + ( A % 10 ) * base;
        A = A / 10;
        base = base * K;
    }

    long B_10 = 0;
    base = 1;
    while(B > 0){
        B_10 = B_10 + ( B % 10 ) * base;
        B = B / 10;
        base = base * K;
    }

    cout << A_10 * B_10 << endl;
}
