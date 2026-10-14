#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        int next=0;
        for(int j=i+1;j<n;j++){
            // if (a[j]==a[i]) cout<<"0"<<" ";
            if(a[j]>a[i])
            {
                next=a[j];
                break;
            }
        }
        cout<<next<<" ";
    }
    cout<<endl;
}