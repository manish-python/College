#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string k1 = "";
    for (int i = 0; i < s.size(); i += 2 * k)
    {
        k1 += s.substr(i, k);
        string s1 = s.substr(i + k, k);
        reverse(s1.begin(), s1.end());
        k1 += s1;
    }
    cout << k1;
}