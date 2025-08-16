#include <iostream>
#include <vector>
#include <set>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxSum(vector<int> &nums)
    {
        set<int> unique_element;
        vector<int> unique_element_vector;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            unique_element.insert(nums[i]);
        }

        for (int i : unique_element)
        {
            unique_element_vector.push_back(i);
        }

        for (int i = 0; i < unique_element_vector.size(); i++)
        {
            if (unique_element_vector[i] < 0)
            {
                continue;
            }
            else
            {
                sum += unique_element_vector[i];
            }
        }

        if (sum == 0)
        {
            sum = *max_element(unique_element_vector.begin(), unique_element_vector.end());
        }

        return sum;
    }
};