#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        vector<long long> arr;

        for (long long i = 0; i < n; i++)
        {
            long long temp;
            cin >> temp;
            arr.push_back(temp);
        }

        auto it = max_element(arr.begin(), arr.end());
        long long index = distance(arr.begin(), it);
        cout << arr[index] << "\n";
    }
    return 0;
}
