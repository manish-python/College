/*
STRING REVERSAL
reverse(old_str.begin(), old_str.end()); -> In Place
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    string s;
    // cin>>n;
    cin>>s;
    string s1 = s;
    reverse(s1.begin(),s1.end());
    if(s==s1) cout<<"True";
    else cout<<"False";
}