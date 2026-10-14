#include <bits/stdc++.h>
using namespace std;

int digSum(int num)
{
	int sum = 0;

	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}

	return sum;
}

int main()
{
    int n, k;
	cin >> n>>k;
    int total =digSum(n)*k;
    int ans;
	while(total>=10){   
        total=digSum(total);
    }
	cout << total;
}
