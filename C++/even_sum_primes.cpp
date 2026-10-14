// count the prime numbers in a given range having an even digit sum, the range is defined by its first value a and las value b , both inclusive. sample input 10 25 output 4
#include <bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            int sum = 0;
            int n = i;
            while (n > 0)
            {
                sum += n % 10;
                n /= 10;
            }
            if (sum % 2 == 0)
                count++;
        }
    }
    cout << count;
}

