#include <bits/stdc++.h>
using namespace std;

map<string, int> variable;
map<string, vector<int>> variable_list;

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

int change_s_to_i(string str) {
    if (all_of(str.cbegin(), str.cend(), [](char ch) { return isdigit(ch);}) && !str.empty()) {
        return stoi(str);
    } else {
        return variable[str];
    }
}

void define_int(vector<string> &command) {
    int v = 0;
    for (int i = 3; i < (int)command.size(); i += 2) {
        if (i == 3) {
            v = change_s_to_i(command.at(i));
        } else if (command.at(i-1) == "+") {
            v += change_s_to_i(command.at(i));
        } else if (command.at(i-1) == "-") {
            v -= change_s_to_i(command.at(i));
        }
    }
    variable[command.at(1)] = v;
}

int calc_int(vector<string> &command) {
    int result = 0;
    for (int i = 1 ; i < (int)command.size(); i += 2) {
        if (i == 1) {
            result = change_s_to_i(command.at(i));
        } else if (command.at(i-1) == "+") {
            result += change_s_to_i(command.at(i));
        } else if (command.at(i-1) == "-") {
            result -= change_s_to_i(command.at(i));
        }
    }
    return result;
}

vector<int> calc_vec_run(vector<int> vec1, vector<int> vec2, string sign) {
    if (vec1.size() == 0) {
        return vec2;
    }
    if (sign == "+") {
        for (int i = 0; i < (int)vec1.size(); i++) {
            vec1.at(i) += vec2.at(i);
        }
    } else if (sign == "-") {
        for (int i = 0; i < (int)vec1.size(); i++) {
            vec1.at(i) -= vec2.at(i);
        }
    }
    return vec1;
}

vector<int> calc_vec(vector<string> &command) {
    vector<int> list;
    int i = 1;
    string sign = "+";

    while (i < (int)command.size()) {
        if (variable_list.find(command.at(i)) != variable_list.end()) {
            list = calc_vec_run(list, variable_list[command.at(i)], sign);
            i++;
        } else if (command.at(i) == "+" || command.at(i) == "-") {
            sign = command.at(i);
            i++;
        } else if (command.at(i) == "[") {
            vector<int> tmp_list;
            while (command.at(i) != "]") {
                if (all_of(command.at(i).cbegin(), command.at(i).cend(), [](char ch) { return isdigit(ch) != 0;})) {
                    tmp_list.push_back(stoi(command.at(i)));
                } else if (variable.find(command.at(i)) != variable.end()) {
                    tmp_list.push_back(variable[command.at(i)]);
                }
                i++;
            }
            if (list.size() > 0) {
                list = calc_vec_run(list, tmp_list, sign);
            } else {
                list = tmp_list;
            }
            i++;
        } else {
            i++;
        }
    }
    return list;
}

int main() {
    int N;
    cin >> N;
    vector<vector<string>> commands(N);

    for (int i = 0; i < N; i++) {
        commands.at(i) = read_command();
        if (commands.at(i).at(0) == "int") {
            define_int(commands.at(i));
        } else if (commands.at(i).at(0) == "print_int") {
            cout << calc_int(commands.at(i)) << endl;
        } else if (commands.at(i).at(0) == "vec") {
            variable_list[commands.at(i).at(1)] = calc_vec(commands.at(i));
        } else if (commands.at(i).at(0) == "print_vec") {
            vector<int> vec;
            vec = calc_vec(commands.at(i));
            cout << "[ ";
            for (int j = 0; j < vec.size(); j++) {
                cout << vec.at(j) << " ";
            }
            cout << "]" << endl;
        }
    }
}
