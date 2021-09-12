#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> p(N, vector<int>(2));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> p.at(i).at(j);
        }
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        int x1 = p.at(i).at(0);
        int y1 = p.at(i).at(1);
        for (int j = i + 1; j < N; j++) {
            int x2 = p.at(j).at(0);
            int y2 = p.at(j).at(1);
            if ((x1 != x2) && (y1 != y2)) {
                vector<int> p1 = {x1, y2};
                vector<int> p2 = {x2, y1};
                auto result1 = find(p.begin(), p.end(), p1);
                auto result2 = find(p.begin(), p.end(), p2);
                if ( result1 != p.end() && result2 != p.end()) {
                    count ++;
                }
            }
        }
    }

    cout << count/2 << endl;
}
