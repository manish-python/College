// an armstrong number is a number that is equal to the sum of its own digits each raised to the power of the total number of digit. sample input 100 999 output 153 370 371 407

#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n)
{
    int temp = n;
    int digits = 0;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;
    int sum = 0;

    while (temp >= 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (isArmstrong(i))
            cout << i << " ";
    }
}