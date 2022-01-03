#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    int a_sum = 0;
    int b_sum = 0;
    cin >> n;
    priority_queue<int> que;
    for (int i = 0; i < n; i++) {
        cin >> a;
        que.push(a);
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            a_sum += que.top();
        } else {
            b_sum += que.top();
        }
        que.pop();
    }

    cout << a_sum - b_sum << endl;
    return 0;
}
