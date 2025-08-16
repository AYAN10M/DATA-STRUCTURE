#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximum69Number(int num)
    {
        auto x = to_string(num);

        for (auto &ch : x)
        {
            if (ch == '6')
            {
                ch = '9';
                break;
            }
        }

        return stoi(x);
    }
};