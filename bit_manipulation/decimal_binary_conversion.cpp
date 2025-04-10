#include <bits/stdc++.h>
using namespace std;

int convertBinary(int dec_num)
{
    if (dec_num == 0)
        return 0;

    int binary_num = 0;
    int pow = 1;

    while (dec_num > 0)
    {
        int rem = dec_num % 2;
        dec_num /= 2;
        binary_num += rem * pow;
        pow *= 10;
    }

    return binary_num;
}

int main()
{
    int dec_num;
    cin >> dec_num;

    cout << convertBinary(dec_num);
    return 0;
}
