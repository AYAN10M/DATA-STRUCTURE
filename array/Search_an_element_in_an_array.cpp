#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, num;
    cin >> size >> num;

    vector<int> arr;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    auto iterator = find(arr.begin(), arr.end(), num);
    if (iterator == arr.end() && arr[size - 1] != num)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}
