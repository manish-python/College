#include <bits/stdc++.h>
using namespace std;

int digSum(int num)
{
    int sum = 0;
    for (int i = 0; i <= num; i++)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int start, end;
    cin >> start >> end;

    int count = 0;
    for (int i = start; i <= end; i++)
    {
        if (i % 3 == 0 && digSum(i) % 2 == 0) count++;
    }
    cout << count;
}