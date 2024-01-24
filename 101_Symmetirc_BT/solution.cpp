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
private:
    bool isSymmetric(TreeNode *lR, TreeNode *rR)
    {

        if (lR == nullptr && rR == nullptr)
            return true;
        else if (lR == nullptr || rR == nullptr)
            return false;

        if (lR->val != rR->val)
            return false;
        return (isSymmetric(lR->left, rR->right)) && (isSymmetric(lR->right, rR->left));
    }

public:
    bool isSymmetric(TreeNode *root)
    {
        return isSymmetric(root->left, root->right);
    }
};