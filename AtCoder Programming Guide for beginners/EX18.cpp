#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) {
        cin >> A.at(i) >> B.at(i);
    }

    vector<vector<char>> data(N, vector<char>(N, '-'));

    for (int i = 0; i < M; i++) {
        int win = A.at(i) - 1;
        int lose = B.at(i) - 1;
        data.at(win).at(lose) = 'o';
        data.at(lose).at(win) = 'x';
    }

    for (int i = 0; i < data.size(); i++) {
        for (int j = 0; j < data.at(i).size(); j++) {
            cout << data.at(i).at(j);
            if (j == data.at(i).size() - 1) {
                cout << endl;
            } else {
                cout << ' ';
            }
        }
    }
}
