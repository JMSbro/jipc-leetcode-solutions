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
    int countNodes(TreeNode* root) {
        if(root == nullptr)return 0;

        int left = 1 + leftCount(root->left);
        int right = 1 + rightCount(root->right);

        if(left == right)return (1 << left) - 1;

        return 1 + countNodes(root->left) + countNodes(root->right);
    }

    int leftCount(TreeNode* node) {
        int cnt = 0;
        while(node) {
            node = node->left;
            cnt++;
        }
        return cnt;
    }

    int rightCount(TreeNode* node) {
        int cnt = 0;
        while(node) {
            node = node->right;
            cnt++;
        }
        return cnt;
    }
};
