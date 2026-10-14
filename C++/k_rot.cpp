#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    string s;

    cin >> n >> s;

    int k = 0;

    while (n > 0) {
        int d = n % 10;
        k += d * d;
        n /= 10;
    }

    string s2 = "";

    for (char c : s) {
        if (isalpha(c))
            s2 += c;
    }

    k %= s2.length();

    if (k % 2 == 0)
        rotate(s2.begin(), s2.end() - k, s2.end());
    else
        rotate(s2.begin(), s2.begin() + k, s2.end());

    cout << s2;

    return 0;
}