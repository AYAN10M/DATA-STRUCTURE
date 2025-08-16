#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n == 1)
        {
            return true;
        }

        // Removing the odd no and negative number
        if (n % 2 != 0 || n <= 0 || n == 2)
        {
            return false;
        }

        while (n % 4 == 0)
        {
            n = n / 4;
        }

        if (n == 1)
        {
            return true;
        }

        return false;
    }
};