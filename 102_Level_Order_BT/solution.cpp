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
    vector<vector<int>> levelOrder(TreeNode *root)
    {

        vector<vector<int>> result;

        if (root == nullptr)
            return result;

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {

            auto qSize = q.size();
            vector<int> currentLevelNodes;

            for (auto i = 0; i < qSize; ++i)
            {

                TreeNode *frontNode = q.front();
                q.pop();

                currentLevelNodes.push_back(frontNode->val);

                if (frontNode->left)
                    q.push(frontNode->left);
                if (frontNode->right)
                    q.push(frontNode->right);
            }

            result.push_back(currentLevelNodes);
        }

        return result;
    }
};

// Unorthodox DFSy way
// class Solution
// {
// private:
//     vector<vector<int>> result;

//     void levelOrder(TreeNode *root, uint32_t level)
//     {
//         if (root == nullptr)
//             return;

//         if (result.size() == level)
//             result.push_back(vector<int>());

//         result[level].push_back(root->val);
//         levelOrder(root->left, level + 1);
//         levelOrder(root->right, level + 1);
//     }

// public:
//     vector<vector<int>> levelOrder(TreeNode *root)
//     {
//         levelOrder(root, 0);

//         return result;
//     }
// };