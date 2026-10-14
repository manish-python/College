#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    int k;
    cin >> s1 >> s2 >> k;
    k = k % s1.size();
    string r1 = s1.substr(s1.size() - k) + s1.substr(0, s1.size() - k);

    k = k % s2.size();
    string r2 = s2.substr(k) + s2.substr(0, k);

    string s3 = r1 + r2;

    // string rev = s3;
    // reverse(rev.begin(), rev.end());
    cout << s3 << " ";
    if (s3 == string(s3.rbegin(), s3.rend())) cout << "True";
    else cout << "False";
}