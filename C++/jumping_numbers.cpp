// Given a positive number X. FInd all jumping numbers smaller than or equal to X. A number is called a jumping number if all adjacent digits in it differ by 1. All single digit numbers are considered as jumping numbers.
#include <bits/stdc++.h>
using namespace std;

int isJumping(int n) {
    if (n < 10)
        return 1;
    int last = n % 10;
    n /= 10;
    while (n > 0) {
        int digit = n%10;
        if (digit != last+1 && digit!=last-1)
            return 0;
        last = digit;
        n /= 10;
    }
    return 1;
}

int main() {
    int x;
    cin>> x;

    for (int i = 0; i <= x; i++) {
        if (isJumping(i))
            cout<<i<< " ";
    }
}

int isJumping(int n){
    if (n<10) return 1;
    int last=n%10;
    n/=10;
    while(n>0){
        int dig=n%10;
        if(dig!=last+1 && dig!=last-1) return 0;
        last = dig;
        n/=10;
        }
        return 1;
}