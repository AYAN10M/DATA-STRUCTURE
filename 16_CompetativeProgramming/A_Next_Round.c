/*

"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.

Input
The first line of the input contains two integers n and k (1 ≤ k ≤ n ≤ 50) separated by a single space.

The second line contains n space-separated integers a1, a2, ..., an (0 ≤ ai ≤ 100), where ai is the score earned by the participant who got the i-th place. The given sequence is non-increasing (that is, for all i from 1 to n - 1 the following condition is fulfilled: ai ≥ ai + 1).

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

    int n, k, i, count = 0;
    scanf("%d %d", &n, &k);

    // array which contains the score
    int score[n];

    // taking input the score of the participants
    for (i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }

    for (i = 0; i < k; i++)
    {
        if (score[i] == 0)
        {
            continue;
        }
        else
        {
            if (score[i] == score[k])
            {
                k++;
            }
            
            count++;
        }
    }

    printf("%d", count);

    return 0;
}