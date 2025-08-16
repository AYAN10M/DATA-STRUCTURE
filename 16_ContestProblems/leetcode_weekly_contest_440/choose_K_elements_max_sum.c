#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long *findMaxSum(int *nums1, int nums1Size, int *nums2, int nums2Size, int k, int *returnSize)
{
    int pickedIndex[nums1Size];
    memset(pickedIndex, 0, sizeof(int) * nums1Size);

    for (int i = 0; i < nums1Size; i++)
    {
        for (int j = i + 1; j < nums2Size; j++)
        {
            if (nums1[i] > nums1[j])
            {
                if (pickedIndex[j] == 0)
                {
                    pickedIndex[j] = 1;
                }
            }
        }
    }

    int answer[nums1Size];
    memset(answer, 0, sizeof(int) * nums1Size);
}