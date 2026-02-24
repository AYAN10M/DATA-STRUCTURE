#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int index = nums.size(), low = 0, high = nums.size() - 1, ans = nums.size();
        while (low <= high)
        {
            int mid = (high + low) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                ans = mid;
                high = mid - 1;
            }
        }

        return ans;
    }
};

/*
Problem link: https://leetcode.com/problems/search-insert-position/description/


This is the problem of finding the lower bound of the given number :)

*/