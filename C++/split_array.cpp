// given an integer array having N elements. find the first locations of theminuum and maximum elements in the array. split the array into threee parts from these locations. built another array by concatenating the second part, followed by the first part, followed by the third part. print the elements of this array in a single line. sample input : 8
// 2 4 1 3 5 9 7 6 output : 1 3 5 2 4 9 7 6
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min_index = min_element(arr.begin(), arr.end()) - arr.begin();
    int max_index = max_element(arr.begin(), arr.end()) - arr.begin();

    if (min_index > max_index) {
        swap(min_index, max_index);
    }
    vector<int> part1(arr.begin(), arr.begin() + min_index);
    vector<int> part2(arr.begin() + min_index, arr.begin() + max_index);
    vector<int> part3(arr.begin() + max_index, arr.end());
    vector<int> result = part2;
    result.insert(result.end(), part1.begin(), part1.end());
    result.insert(result.end(), part3.begin(), part3.end());

    for (int i : result) {
        cout << i << " ";
    }

}