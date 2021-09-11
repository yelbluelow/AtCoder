#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    queue<int> Q1;
    priority_queue<
        int,           // 要素の型はint
        vector<int>,   // 内部コンテナはstd::vector (デフォルトのまま)
        greater<int>   // 昇順 (デフォルトはstd::less<T>)
    > Q2;

    for (int i = 0; i < Q; i++) {
        int query;
        cin >> query;

        if (query == 1) {
            int x;
            cin >> x;
            Q1.push(x);

        } else if (query == 2) {
            if (Q2.empty()) {
                cout << Q1.front() << endl;
                Q1.pop();

            } else {
                cout << Q2.top() << endl;
                Q2.pop();
            }

        } else {
			while(!Q1.empty()) {
                Q2.push(Q1.front());
                Q1.pop();
            }
        }
    }
}
