#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string smallestPalindrome(string s)
    {
        unordered_map<char, int> freq;
        for (char c : s)
        {
            freq[c]++;
        }

        string firstHalf = "", middle = "";
        for (char c = 'a'; c <= 'z'; c++)
        {
            if (freq[c] % 2 != 0)
            {
                middle = c;
                freq[c]--;
            }

            firstHalf += string(freq[c] / 2, c);
        }

        string secondHalf = firstHalf;
        reverse(secondHalf.begin(), secondHalf.end());

        return firstHalf + middle + secondHalf;
    }
};

/*
    Problem link:
        https://leetcode.com/contest/weekly-contest-445/problems/smallest-palindromic-rearrangement-i/?slug=find-closest-person&region=global_v2
*/