//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

// User function template for C++
class Solution
{
public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr)
    {

        int second_largest = -1;

        if (arr.size() == 0)
        {
            return -1;
        }

        if (arr.size() == 1)
        {
            return arr[0];
        }

        sort(arr.begin(), arr.end());

        for (int i = arr.size() - 1; i > 0; i--)
        {
            if (arr[i] != arr[i - 1])
            {
                second_largest = arr[i - 1];
                break;
            }
        }

        return second_largest;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends