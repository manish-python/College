#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string s1, s2;

    getline(cin >> ws, s1);
    getline(cin, s2);

    for (char c : s1) {
        int count = 0;

        for (char x : s2) {
            if (c == x) {
                count++;
            }
        }

        cout << count << " " <<c;
    }

    return 0;
}