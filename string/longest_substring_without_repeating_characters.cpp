#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> hash(256, 0);
        int start = 0, result = 0;

        for (int end = 0; end < s.size(); end++)
        {
            hash[s[end]]++;

            while (hash[s[end]] > 1)
            {
                hash[s[start]]--;
                start++;
            }

            result = max(result, end - start + 1);
        }

        return result;
    }
};
