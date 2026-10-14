#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    int count_and = count(str.begin(), str.end(), '&');
    int count_hash = count(str.begin(), str.end(), '#');
    if (str.length() %2 == 0 && count_and > 0 && count_hash > 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}