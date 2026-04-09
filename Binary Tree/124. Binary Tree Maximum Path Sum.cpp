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
class Solution {
public:
    int helper(TreeNode* node, int &max_sum) {
        if(node==nullptr)return 0;

        int left = max(0, helper(node->left, max_sum));
        int right = max(0, helper(node->right, max_sum));

        int sum = left + right + node->val;
        max_sum = max(sum, max_sum);

        return node->val + max(left, right);
    }

    int maxPathSum(TreeNode* root) {
        int max_sum = INT_MIN;
        helper(root, max_sum);
        return max_sum;
    }
};
