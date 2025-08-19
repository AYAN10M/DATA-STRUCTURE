#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void integerToVector(int n, vector<int> &arr)
{
    while (n > 0)
    {
        arr.push_back(n % 10);
        n /= 10;
    }
    reverse(arr.begin(), arr.end());
}

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            vector<int> arr;
            integerToVector(i, arr);

            bool flag = true;
            for (auto j : arr)
            {
                if (!isPrime(j))
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
