#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        string result;

        int i = a.size(), j = b.size(), carry = 0;
        while (1)
        {
            int bitA, bitB;
            if (i <= 0)
            {
                bitA = 0;
            }
            else
            {
                bitA = a[i - 1] - '0';
                i--;
            }

            if (j <= 0)
            {
                bitB = 0;
            }
            else
            {
                bitB = b[j - 1] - '0';
                j--;
            }

            int sum = bitA + bitB + carry;
            if (sum == 3)
            {
                carry = 1;
                result = result + '1';
            }
            else if (sum == 2)
            {
                carry = 1;
                result = result + '0';
            }
            else
            {
                carry = 0;
                result = result + to_string(sum);
            }

            if (i <= 0 && j <= 0 && carry == 0)
            {
                break;
            }
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

/*

0 + 0 = 0
0 + 1 = 1
1 + 1 = 0 Carry 1
*/