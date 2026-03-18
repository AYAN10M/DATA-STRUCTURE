#include <bits/stdc++.h>
using namespace std;

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
    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        queue<TreeNode *> q;
        q.push(root);

        vector<vector<int>> ans;
        while (!q.empty())
        {
            vector<int> level;
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();
                q.pop();

                if (node->left != NULL)
                {
                    q.push(node->left);
                }

                if (node->right != NULL)
                {
                    q.push(node->right);
                }
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans.size();
    }

    bool isBalanced(TreeNode *root)
    {
        if (root == NULL)
        {
            return true;
        }

        int left_height = maxDepth(root->left);
        int right_height = maxDepth(root->right);

        if (abs(left_height - right_height) <= 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};