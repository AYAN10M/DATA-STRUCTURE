#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numOfUnplacedFruits(vector<int> &fruits, vector<int> &baskets)
    {
        int unplacedFruits = 0;

        for (int i = 0; i < fruits.size(); i++)
        {
            bool placed = false;

            for (int j = 0; j < baskets.size(); j++)
            {
                if (baskets[j] >= fruits[i])
                {
                    baskets[j] = -1;
                    placed = true;
                    baskets.erase(baskets.begin() + j);
                    break;
                }
            }
            if (!placed)
            {
                unplacedFruits++;
            }
        }

        return unplacedFruits;
    }
};