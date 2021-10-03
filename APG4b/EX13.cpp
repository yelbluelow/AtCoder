#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ave;
    vector<int> vec(N);

    for (int i = 0; i < N; i++) {
        cin >> vec.at(i);
        ave += vec.at(i);
    }
    ave /= N;

    for (int i = 0; i < N; i++) {
        cout << abs(vec.at(i) - ave) << endl;
    }
}
