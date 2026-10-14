// Right Rotation
// string rr_s = S.substr(n-k , k ) + S.substr(0 , n-k );
// string rt_s = S.substr(n-k , k ) + S.substr(0 , n-k );
// Left Rotation
// string lr_s = S.substr(k , n-k ) + S.substr(0 , k );
// rotate the given string s of length n by k places towards left give k<=n

#include <bits/stdc++.h>
using namespace std;
int main(){
    string S;
    int n,k1;
    cin>>n>>k1;
    cin>>S;
    int k = k1%n;
    string lr_s = S.substr(k , n-k ) + S.substr(0 , k);
    cout<<lr_s<<endl;
}