// given an array of integers arr having n elements, your task is to print array in smallest number, largest number, 2nd smallest number and 2nd largest number in the array and so on,
// input
// 4
// 1 5 8 4
// output 
// 1 8 4 5 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int start = 0, end = n - 1;
    while (start <= end) {
        cout << arr[start] << " ";
        start++;
        if (start <= end) {
            cout << arr[end] << " ";
            end--;
        }
    }
    
}