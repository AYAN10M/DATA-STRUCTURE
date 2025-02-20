#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int hash[n] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (hash[i] > 0)
        {
            cout << i << " : " << hash[i] << endl;
        }
    }
}