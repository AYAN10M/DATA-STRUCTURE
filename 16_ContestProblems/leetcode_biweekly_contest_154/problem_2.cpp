#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    int uniqueXorTriplets(vector<int> &nums)
    {
        int n = nums.size();
        set<int> result;

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                for (int k = j; k < n; k++)
                {
                    result.insert(nums[i] ^ nums[j] ^ nums[k]);
                }
            }
        }

        return result.size();
    }
};