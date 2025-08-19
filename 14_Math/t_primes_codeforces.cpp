#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    if (n < 2)
    {
        return false;
    }

    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for (auto i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (auto i : arr)
    {
        long long x = sqrtl(i);
        if (x * x != i)
        {
            cout << "NO" << endl;
        }
        else if (isPrime(x))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
