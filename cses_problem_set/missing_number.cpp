#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long arr[n];
    long long hash[n] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[i] = 1;
        cin >> n;
    }

    for (int i = 0; i < n; i++)
    {
        if (hash[i] == 0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}