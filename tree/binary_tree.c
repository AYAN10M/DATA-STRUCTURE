#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *tree;

void create_binary_tree(struct node *tree)
{
    tree = NULL;
}