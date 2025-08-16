#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    // total number of games
    int games = n * (n - 1);

    int arr[games][2];

    for (int i = 0; i < games; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int count = 0;
    for (int i = 0; i < games; i++)
    {
        int hostUniform = arr[i][0];
        for (int j = 0; j < games; j++)
        {
            if (i != j && arr[j][0] == arr[i][1] && hostUniform != arr[j][1])
            {
                count++;
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}