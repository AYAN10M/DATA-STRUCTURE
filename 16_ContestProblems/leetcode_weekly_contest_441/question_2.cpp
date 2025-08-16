#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> solveQueries(vector<int> &nums, vector<int> &queries)
    {
        vector<int> result;

        for (int i = 0; i < queries.size(); i++)
        {
            int current_index = queries[i];
            int element = nums[current_index];
            auto target_index = find(nums.begin() + current_index + 1, nums.end(), element);

            if (target_index != nums.end())
            {
                result.push_back(target_index - nums.begin());
            }
            else
            {
                result.push_back(-1);
            }
        }
        return result;
    }
};