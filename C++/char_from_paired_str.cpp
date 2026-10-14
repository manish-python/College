#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> s(n);

    for (int i = 0; i < n; i++)
        cin >> s[i];

    for (int i = 0; i < n / 2; i++)
    {
        int k = i + 1;

        string ans = s[i].substr(0, k) + s[n - 1 - i].substr(s[n - 1 - i].size() - k);

        cout << ans << " ";
    }

    return 0;
}