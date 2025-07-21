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
    TreeNode *sortedArrayToBST(const vector<int> &nums, int start, int end)
    {

        if (start > end)
            return nullptr;

        uint32_t mid = (start + end) / 2;

        TreeNode *root = new TreeNode(nums[mid]);

        root->left = sortedArrayToBST(nums, start, mid - 1);
        root->right = sortedArrayToBST(nums, mid + 1, end);

        return root;
    }

public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {

        if (!nums.size())
            return nullptr;

        return sortedArrayToBST(nums, 0, nums.size() - 1);
    }
};