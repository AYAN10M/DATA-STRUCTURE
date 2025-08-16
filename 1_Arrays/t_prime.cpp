#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {20, 25, 3, 50, 1000, 9993, 4, 500, 67};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] <= 3)
        {
            continue;
        }

        int count = 0;
        for (int j = 2; j * j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                count++;
                if (count > 1)
                {
                    break;
                }
            }
        }

        if (count == 1)
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}