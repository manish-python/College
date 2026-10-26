#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int nextPosition = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[nextPosition] = arr[i];
            nextPosition++;
        }
    }

    while (nextPosition < n) {
        arr[nextPosition] = 0;
        nextPosition++;
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            cout << ' ';
        }
        cout << arr[i];
    }
    cout << '\n';

    return 0;
}