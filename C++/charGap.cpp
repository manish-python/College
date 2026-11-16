
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    for(int i = 0; i < n; i++) {
        int j;

        for(j = i + 1; j < n; j++) {
            if(s[i] == s[j]) {
                cout << j - i - 1 << " ";
                break;
            }
        }

        if(j == n) {
            cout << "-1 ";
        }
    }

    return 0;
}
