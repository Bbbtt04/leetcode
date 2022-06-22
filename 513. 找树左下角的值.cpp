/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int ans = 0, maxx = 0;

    int findBottomLeftValue(TreeNode *root)
    {
        dfs(root, 1);
        return ans;
    }

    void dfs(TreeNode *root, int d)
    {
        if (!root)
            return;
        if (d > maxx)
        {
            maxx = d;
            ans = root->val;
        }
        dfs(root->left, d + 1), dfs(root->right, d + 1);
    }
};