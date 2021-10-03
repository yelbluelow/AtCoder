#include <bits/stdc++.h>
using namespace std;

// 問題文の形式でvec値を出力
// void print_vec(vector<int> vec) {
//     cout << "[ ";
//     for (int i = 0; i < vec.size(); i++) {
//         cout << vec.at(i) << " ";
//     }
//     cout << "]" << endl;
// }

vector<string> read_command() {
    vector<string> vec(100);

    for (int i = 0; i < 100; i++) {
        cin >> vec.at(i);
        if (vec.at(i) == ";") { 
            break;
        }
    }
    return vec;
}

int change_s_to_i(string str, map<string, int> &variable) {
    if (all_of(str.cbegin(), str.cend(), [](char ch) { return isdigit(ch);}) && !str.empty()) {
        return stoi(str);
    } else {
        return variable[str];
    }
}

void define_int(vector<string> &command, map<string, int> &variable) {
    int v = 0;
    for (int i = 3; i < (int)command.size(); i += 2) {
        if (i == 3) {
            v = change_s_to_i(command.at(i), variable);
        } else if (command.at(i-1) == "+") {
            v += change_s_to_i(command.at(i), variable);
        } else if (command.at(i-1) == "-") {
            v -= change_s_to_i(command.at(i), variable);
        }
    }
    variable[command.at(1)] = v;
}

int calc_int(vector<string> &command, map<string, int> &variable) {
    int result = 0;
    for (int i = 1 ; i < (int)command.size(); i += 2) {
        if (i == 1) {
            result = change_s_to_i(command.at(i), variable);
        } else if (command.at(i-1) == "+") {
            result += change_s_to_i(command.at(i), variable);
        } else if (command.at(i-1) == "-") {
            result -= change_s_to_i(command.at(i), variable);
        }
    }
    return result;
}

void define_vec(vector<string> &command, map<string, int> &variable, map<string, vector<int>> &variable_list) {
    vector<int> list(5);
    int j = 0;
    for (int i = 4; i < (int)command.size(); i += 2) {
        if ((all_of(command.at(i).cbegin(), command.at(i).cend(), [](char ch) { return isdigit(ch);}) || all_of(command.at(i).cbegin(), command.at(i).cend(), [](char ch) { return isalpha(ch);})) && !command.at(i).empty()) {
            list.at(j) = change_s_to_i(command.at(i), variable);
        }
        j++;
    }
    variable_list[command.at(1)] = list;
}

void calc_vec() {
    
}

int main() {
    int N, max;
    cin >> N;
    vector<vector<string>> commands(N);
    map<string, int> variable;
    map<string, vector<int>> variable_list;

    for (int i = 0; i < N; i++) {
        commands.at(i) = read_command();
        if (commands.at(i).at(0) == "int") {
            define_int(commands.at(i), variable);
        } else if (commands.at(i).at(0) == "print_int") {
            cout << calc_int(commands.at(i), variable) <<endl;
        } else if (commands.at(i).at(0) == "vec") {
            define_vec(commands.at(i), variable, variable_list);
            cout << variable_list["a"].at(2) <<endl;
        } else if (commands.at(i).at(0) == "print_vec") {
            calc_vec();
        }
    }
}
