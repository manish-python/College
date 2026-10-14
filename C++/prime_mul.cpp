// consider the series 2 3 6 5 7 35 11 13 143 17 19 323...... the series begins with first two prime nubmers 2 and 3 followed by their product 6. the next pair of consecutive prime number 5 and 7 is then printed followed by their product 35 and so on. input 7 output 2 3 6 5 7 35 11
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    int count = 0;
    int num = 2;
    while (count < n) {
        if (isPrime(num)) {
            int p1 = num;
            int next = num + 1;
            while (!isPrime(next))
                next++;
            int p2 = next;
            cout << p1 << " ";
            count++;
            if (count < n) {
                cout << p2 << " ";
                count++;
            }
            if (count < n) {
                cout << p1 * p2 << " ";
                count++;
            }
            num = p2 + 1;
        }
        num++;
    }
}