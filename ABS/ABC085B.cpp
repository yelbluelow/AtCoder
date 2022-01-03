#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n;
    set<int> d_set;
    for (int i = 0; i < n; i++) {
        cin >> d;
        d_set.insert(d);
    }

    cout << d_set.size() << endl;
    return 0;
}
