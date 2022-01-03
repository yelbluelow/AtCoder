#include <bits/stdc++.h>
using namespace std;

int calc_digits(int num) {
    int digits_sum = 0;
    while (num >= 1) {
        digits_sum += num % 10;
        num /= 10;
    }
    return digits_sum;
}

int main() {
    int n, a, b, digits;
    int sum = 0;
    cin >> n >> a >> b;

    for (int i = a; i <= n; i++) {
        digits = calc_digits(i);
        if (digits >= a && digits <= b) {
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}
