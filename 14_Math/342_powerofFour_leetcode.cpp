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
        if (n <= 0 || n % 2 != 0)
        {
            return false;
        }

        bitset<31> bin_num(n);
        auto count = 0;

        for (int i = 0; i < 31; i++)
        {
            if (i % 2 != 0)
            {
                if (bin_num[i] == 1)
                {
                    count++;
                }
            }
            if (count > 1)
            {
                return false;
            }
        }
        return true;
    }
};

/*

1 is 4^0 => 00001
4 is 4^1 => 00100
16 is 4^2 => 10000
64 is 4^3 => 1000000

*/