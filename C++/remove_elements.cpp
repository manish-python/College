// given an integer array having N elements. find the number of occurrences of 1, and remove the element at the index, which is equal to the number of occurrences of 1. print the modified array. given that, count of 1,n.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        }
    }
    if(count<n){
        arr.erase(arr.begin()+count);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}