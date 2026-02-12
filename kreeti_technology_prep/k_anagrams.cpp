#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool areKAnagrams(string &s1, string &s2, int k)
    {
        // check if two strings are equal or not
        if (s1.length() != s2.length())
        {
            return false;
        }

        vector<int> h1(26, 0), h2(26, 0);
        for (int i = 0; i < s1.length(); i++)
        {
            h1[s1[i] - 'a']++;
            h2[s2[i] - 'a']++;
        }

        int diff = 0;
        for (int i = 0; i < 26; i++)
        {
            if (h1[i] > h2[i])
            {
                diff += h1[i] - h2[i];
            }
        }

        if (diff <= k)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};