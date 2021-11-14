#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n), result(n);
    for (int i = 0; i < n; i++) {
        cin >> s.at(i);
    }
    int max = *max_element(s.begin(), s.end());

    int b = 1;
    while (max > (7*b + 2)) {
        for (int i = 0; i < n; i++) {
            if ((s.at(i) > (4*b + 3)) && (s.at(i) % (4*b + 3) == 3*b)) {
                result.at(i) = 1;
            }
        }
        b++;
    }

    cout << count(result.begin(), result.end(), 0) << endl;
    return 0;
}
