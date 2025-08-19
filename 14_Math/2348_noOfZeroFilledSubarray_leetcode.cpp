#include <bits/stdc++.h>
using namespace std;

// Time complexity O(n*n)
class Solution
{
public:
    long long zeroFilledSubarray(vector<int> &nums)
    {
        long long count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                count++;
                for (int j = i + 1; j < nums.size(); j++)
                {
                    if (nums[j] == 0)
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        return count;
    }
};

// Time complexity O(n)
class Solution
{
public:
    long long zeroFilledSubarray(vector<int> &nums)
    {
        long long count = 0, streak = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                streak++;
                count += streak;
            }
            else
            {
                streak = 0;
            }
        }
        return count;
    }
};