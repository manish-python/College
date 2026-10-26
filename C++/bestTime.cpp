#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int best[n];
    best[0] = arr[0];


    for (int i = 1; i < n; i++)
  {
    best[i] = min(best[i - 1], arr[i - 1]);
  }
  int maxProfit = 0;
  for (int i = 0; i < n; i++)
  {
    int profit = arr[i] - best[i];
    maxProfit = max(maxProfit, profit);
  }
  cout<<maxProfit;
    return 0;

}