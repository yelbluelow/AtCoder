#include <bits/stdc++.h>
using namespace std;

string split_word(string words) {
    string word = "NO";
    vector<string> vect;
    vect = {"dreamer", "eraser", "dream", "erase"};

    for (string t : vect) {
        if (words.size() >= t.size() && equal(begin(t), end(t), begin(words))) {
            word = words.substr(t.size());

            if (word.size() == 0) {
                return "";
            }

            for (string t2 : vect) {
                if (word.size() >= t2.size() && equal(begin(t2), end(t2), begin(word))) {
                    words = word;
                    return words;
                }
            }
        }
    }

    return "NO";
}

int main() {
    string s;
    cin >> s;
    while (!s.empty() && s != "NO") {
        s = split_word(s);
    }

    if (s.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
