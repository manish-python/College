#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[n],b[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
    b[i]=arr[i];
  }
  sort(b, b + n, greater<int>());
    for (int i=0; i<n; i++) {
        int rank=1;
        for (int j=0; j<n; j++) {
            if (b[j] > arr[i])
                rank++;
        }
        cout << rank << " ";
    }
}