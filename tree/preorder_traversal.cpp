#include <bits/stdc++.h>
using namespace std;

// Preorder means root left right

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> soln;
        helperFunc(soln, root);
        return soln;
    }

    void helperFunc(vector<int> &arr, TreeNode *root)
    {
        if (root == nullptr)
        {
            return;
        }

        arr.push_back(root->val);
        helperFunc(arr, root->left);
        helperFunc(arr, root->right);
    }
};