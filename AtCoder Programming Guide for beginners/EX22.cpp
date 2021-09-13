#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a.at(i).second >> a.at(i).first;
    }

    sort(a.begin(), a.end());
    for (auto p : a) {
        cout << p.second << " " << p.first << endl;
    }
}
