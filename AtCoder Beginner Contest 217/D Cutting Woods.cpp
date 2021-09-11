#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, q;
    cin >> l >> q;
    // set<int> 型のオブジェクト st を生成
    set<int> l_set{l};

    for (int i = 0; i < q; i++) {
        int c, x;
        cin >> c >> x;
        if (c == 1) {
            l_set.insert(x);
        } else {
            auto it = l_set.lower_bound(x);
            if (distance(it, l_set.begin())) {
                cout << *it - *prev(it) << endl;
            } else {
                cout << *it << endl;
            }
        }
    }
}
