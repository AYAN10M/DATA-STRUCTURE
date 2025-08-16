#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;

        if (N == 0 || N == 1)
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> result;

        if (N % 2 == 0)
        {
            while (N > 0)
            {
                result.push_back(2);
                N -= 2;
            }
        }
        else
        {
            N -= 3;
            result.push_back(3);
            while (N > 0)
            {
                result.push_back(2);
                N -= 2;
            }
        }

        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i];
            if (i < result.size() - 1)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
