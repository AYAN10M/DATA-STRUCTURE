#include <bits/stdc++.h>
using namespace std;

vector<int> temp;

void findSubsequence(vector<int> nums, int size, int index)
{
    if (index == size)
    {

        if (temp.size() != 0)
        {
            for (int i = 0; i < temp.size(); i++)
            {
                cout << temp[i] << " ";
            }
            cout << endl;
        }

        if (temp.size() == 0)
        {
            cout << "{}" << endl;
        }
        return;
    }

    findSubsequence(nums, size, index + 1);
    temp.push_back(nums[index]);
    findSubsequence(nums, size, index + 1);
    temp.pop_back();
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> result;
    findSubsequence(arr, arr.size(), 0);
    return 0;
}