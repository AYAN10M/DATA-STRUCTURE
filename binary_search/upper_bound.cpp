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
            if (nums[mid] > target)
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

Implement Upper Bound

Problem Statement: Given a sorted array of N integers and an integer x, write a program to find the upper bound of x.

What is Upper Bound?
The upper bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than the given key i.e. x.

The upper bound is the smallest index, ind, where arr[ind] > x.



Example 1:
Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
Result: 3
Explanation: Index 3 is the smallest index such that arr[3] > x.

Example 2:
Input Format: N = 6, arr[] = {3,5,8,9,15,19}, x = 9
Result: 4
Explanation: Index 4 is the smallest index such that arr[4] > x.

*/