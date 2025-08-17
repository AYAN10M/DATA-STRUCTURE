#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (auto i = 2; i * i < n; i++)
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
    int n;
    cin >> n;

    
    

    return 0;
}
