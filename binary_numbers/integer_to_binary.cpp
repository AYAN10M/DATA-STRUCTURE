#include <bits/stdc++.h>
using namespace std;

string toBinary(int n)
    {
        if(n == 0)
        {
            return "";
        }

        string result = "";
        while(n > 0)
        {
            int temp = n % 2;
            n = n / 2;

            result.push_back(temp + '0');
        }
        reverse(result.begin(), result.end());

        return result;
    }

    int main()
    {
        cout << toBinary(10);
        return 0;
    }