#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    string toBinary(int n)
    {
        if(n == 0)
        {
            return "";
        }

        string result = "";
        while(n > 0)
        {
            int temp = n % 2;
            n = n / 2;

            result.push_back(temp + '0');
        }

        return result;
    }

    int concatenatedBinary(int n) 
    {
    }
};