/*
    Resource Link : https://www.geeksforgeeks.org/dsa/sieve-of-eratosthenes/

    Step 1:
    Initialize a Boolean array prime[0..n] and set all entries to true, except for 0 and 1 (which are not primes).

    Step 2:
    Start from 2, the smallest prime number.

        *For each number p from 2 up to √n:

        * If p is marked as prime(true):
            Mark all multiples of p as not prime(false), starting from p * p (since smaller multiples have already been marked by smaller primes).

    Step 3:
    After the loop ends, all the remaining true entries in prime represent prime numbers.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n)
{
    vector<bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            // marking as false
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    vector<int> res;
    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
        {
            res.push_back(p);
        }
    }
    return res;
}

int main()
{
    int n = 35;
    vector<int> res = sieve(n);
    for (auto ele : res)
    {
        cout << ele << ' ';
    }
    return 0;
}