#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution
{
public:
    vector<int> minCosts(vector<int> &cost)
    {
        vector<int> answer;
        int min_cost = INT_MAX;
        for (int i = 0; i < cost.size(); ++i)
        {
            if (cost[i] < min_cost)
            {
                min_cost = cost[i];
            }
            answer.push_back(min_cost);
        }
        return answer;
    }
};