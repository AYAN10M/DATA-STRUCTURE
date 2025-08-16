#include <stdio.h>
int main()
{
    int matrix[5][5];
    int i, j;
    int row, column, move = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1)
            {
                row = i;
                column = j;
            }
        }
    }
    
    while (row != 2 || column != 2)
    {
        if (row > 2)
        {
            row = row-1;
            move++;
        }
        else if (row < 2)
        {
            row = row+1;
            move++;
        }

        if (column > 2)
        {
            column = column-1;
            move++;
        }
        else if (column < 2)
        {
            column = column+1;
            move++;
        }
    }
    printf("%d", move);
    return 0;
}