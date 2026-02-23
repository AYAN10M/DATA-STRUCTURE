#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lowerBound(vector<int> nums, int target)
    {
        // At first we will assume that our ans is lies out of array
        int low = 0, high = nums.size() - 1, ans = nums.size();
        while (low <= high)
        {
            int mid = (high + low) / 2;
            // Look at left
            if (nums[mid] >= target)
            {
                // we will assume this to be our ans, later we will try to decrease it as much as possible
                ans = mid;
                // Trying to find more smaller index
                high = mid - 1;
            }
            // Look at right
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};

/*

Implement Lower Bound

Problem Statement: Given a sorted array of N integers and an integer x, write a program to find the lower bound of x.

What is lower bound?
The lower bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x.

The lower bound is the smallest index, ind, where arr[ind] >= x. But if any such index is not found, the lower bound algorithm returns n i.e. size of the given array.

*/