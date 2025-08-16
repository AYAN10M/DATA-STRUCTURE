#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findClosest(int x, int y, int z)
    {
        int dis_x_z = abs(z - x);
        int dis_y_z = abs(z - y);

        if (dis_x_z < dis_y_z)
        {
            return 1;
        }
        else if (dis_x_z == dis_y_z)
        {
            return 0;
        }
        else
        {
            return 2;
        }
    }
};