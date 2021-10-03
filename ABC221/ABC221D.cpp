#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<int, int> logins;
    vector<int> B(10, 0);
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        cin >> logins[a];
    }

    for (auto it = logins.begin(); it != logins.end(); ++it) {
        for (int i = 0; i < it->second; i++) {
            B.at(it->first + i) ++;
        }
    }

    for (int i = 1; i < *max_element(B.begin(), B.end()) + 1; i++) {
        cout << count(B.begin(), B.end(), i) << " ";
    }
    cout << endl;
}
