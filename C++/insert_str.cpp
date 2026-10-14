#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    int n;
    getline(cin, s1);
    getline(cin, s2);
    cin>> n;

    for (int i = n; i < s1.length(); i += n + s2.length()) {
        s1.insert(i, s2);
    }

    cout << s1;

}