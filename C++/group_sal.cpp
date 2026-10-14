#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int sum=0;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++){
            cin>>arr[i];
    }
    sum=accumulate(arr, arr+n, 0);
    cout<<sum<<endl;
}
}