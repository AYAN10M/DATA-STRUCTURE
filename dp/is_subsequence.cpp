#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int i = 0, j = 0;

        if (s.length() > t.length())
        {
            return false;
        }
        else if (s.length() == t.length())
        {
            return s == t;
        }
        else
        {
            while (i < s.length() && j < t.length())
            {
                if (s[i] == t[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    j++;
                }
            }

            if (i == s.length())
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};