#include <stdio.h>
#include <stdlib.h>

/*
    problem link: https://leetcode.com/problems/two-sum/description/?envType=problem-list-v2&envId=array

*/

// Definition for singly-linked list.

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode *result = NULL, *tail = NULL;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry > 0)
    {
        int sum = carry;

        if (l1 != NULL)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL)
        {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;
        sum %= 10;

        struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
        temp->val = sum;
        temp->next = NULL;

        if (result == NULL)
        {
            result = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    return result;
}
