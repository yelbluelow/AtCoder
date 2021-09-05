#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, q;
    cin >> l >> q;
    vector<int> l_list(q, l);

    for (int i = 0; i < q; i++) {
        int c, x;
        cin >> c >> x;
        if (c == 1) {
            l_list.push_back(x);
            sort(l_list.begin(), l_list.end());
        } else {
            for (int j = 0; j < l_list.size(); j++) {
                if (x < l_list.at(j)) {
                    if (j == 0) {
                        cout << l_list.at(j) << endl;
                    } else {
                        cout << l_list.at(j) - l_list.at(j-1) << endl;
                    }
                    break;
                }

            }
        }
    }
}
