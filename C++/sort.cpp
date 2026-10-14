// Sorting an array in C++
// sort(arr, arr + n) is used to sort the array in ascending order
// sort(arr, arr + n, greater<int>()) is used to sort the array in descending order
// sort(arr,arr+n, less<int>()) is used to sort the array in ascending order using less comparator
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr + n, greater<int>());
    cout<<accumulate(arr, arr+5, 0)<<endl;
    for (int i=n-5; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
