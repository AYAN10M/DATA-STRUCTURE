#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numOfUnplacedFruits(int *fruits, int fruitsSize, int *baskets, int basketsSize)
{
    int unplacedFruits = 0;
    int *placedFruits = (int *)malloc(sizeof(int) * fruitsSize);
    memset(placedFruits, 0, sizeof(int) * fruitsSize);

    for (int i = 0; i < fruitsSize; i++)
    {
        for (int j = 0; j < basketsSize; j++)
        {
            if (fruits[i] <= baskets[j])
            {
                if (placedFruits[i] == 0)
                {
                    placedFruits[i] = 1;
                    baskets[j] = -1;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < fruitsSize; i++)
    {
        if (placedFruits[i] == 0)
        {
            unplacedFruits++;
        }
    }

    return unplacedFruits;
}
