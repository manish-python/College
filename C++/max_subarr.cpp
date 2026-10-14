// Maximum subaray sum using vector
#include <bits/stdc++.h>
using namespace std;

void max_subarr(vector<int> arr){
    int n=arr.size();
    int maxSum=arr[0];
    for (int i=0; i < n; i++){
        {
    int currSum = 0;
    for (int j = i; j < n; j++)
    {
      currSum+=arr[j];
      maxSum = max(maxSum, currSum);
    }
  }
}
cout<<maxSum<<endl;
}

int main(){
    int n; cin>>n;
    // int arr[n];
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int arr[]={8,-1,3,4,-3,2,1};
    // int n = sizeof(arr)/4;
    max_subarr(arr);


}