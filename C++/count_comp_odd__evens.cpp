#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int count_odd = 0;
    int count_even = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            count_even++;
        } else {
            count_odd++;
        }
    }
    if(count_odd > count_even){
        cout << "ODD" << endl;
    } else if(count_even > count_odd){
        cout << "EVEN" << endl;
    } else {
        cout << "EQUAL" << endl;
    }
    cout << accumulate(arr, arr+n, 0) << endl;
}