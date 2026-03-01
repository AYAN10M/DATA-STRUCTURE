#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    string toBinary(int n)
    {
        if(n == 0)
        {
            return "0";
        }

        string result = "";
        while(n > 0)
        {
            int temp = n % 2;
            n = n / 2;

            result.push_back(temp + '0');
        }
        reverse(result.begin(), result.end());

        return result;
    }

    int toInteger(string binary)
    {
        long long num = 0;

        for(int i = 0; i < binary.size(); i++)
        {
            num = num * 2 + (binary[i] - '0');
        }

        return num;
    }

    int concatenatedBinary(int n) 
    {
        const int MOD = 1e9 + 7;
        string temp = "";

        for(int i = 1; i <= n; i++)
        {
            temp += toBinary(i);
        }

        long long result = 0;

        for(int i = 0; i < temp.size(); i++)
        {
            result = (result * 2 + (temp[i] - '0')) % MOD;
        }

        return result;
    }
};