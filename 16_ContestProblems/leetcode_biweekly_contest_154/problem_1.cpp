#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int total = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            total += nums[i];
        }

        int rem = total % k;
        if (rem == 0)
            return 0;

        sort(nums.begin(), nums.end(), greater<int>());

        int operations = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int take = min(nums[i], rem);
            rem -= take;
            operations += take;
            if (rem == 0)
                break;
        }

        return operations;
    }
};
