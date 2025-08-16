#include <iostream>
using namespace std;

class Solution
{
public:
    int maxContainers(int n, int w, int maxWeight)
    {
        int no_of_cells = n * n;
        int no_of_containers = 0;

        while (no_of_containers < no_of_cells && (no_of_containers + 1) * w <= maxWeight)
        {
            no_of_containers++;
        }

        return no_of_containers;
    }
};
