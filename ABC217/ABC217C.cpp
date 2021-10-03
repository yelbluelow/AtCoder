#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> p(N), q(N);
    for (int i = 0; i < N; i++) {
        cin >> p.at(i);
    }

    for (int i = 0; i < N; i++) {
        q.at(p.at(i) - 1) = i + 1;
    }

    for (int i = 0; i < N; i++) {
        if (i != 0) {
            cout << " ";
        }
        cout << q.at(i);
    }
    cout << endl;
}
