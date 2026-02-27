#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    // Defining the default constructor
    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};