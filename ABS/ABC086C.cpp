#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, r;
    int t_pre = 0;
    int r_pre = 0;
    string res = "Yes";
    cin >> n;
    vector<vector<int>> plans(n, vector<int>(3));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
        cin >> plans.at(i).at(j);
        }
    }

    for (int i = 0; i < n; i++) {
        t = plans.at(i).at(0);
        r = plans.at(i).at(1) + plans.at(i).at(2);

        if ((t - t_pre < abs(r - r_pre)) || (t - t_pre + r - r_pre) % 2 == 1) {
            res = "No";
            break;
        }
        t_pre = t;
        r_pre = r;
    }

    cout << res << endl;
}
