class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == nullptr)return 0;

        queue<TreeNode*>q;
        q.push(root);

        int depth = 0;

        while(!q.empty()) {
            int sz = q.size();
            depth++;
            for(int i = 0; i < sz; i++) {
                TreeNode* a = q.front();
                q.pop();

                if(!a->right && !a->left)return depth;

                if(a->right != nullptr)q.push(a->right);
                if(a->left != nullptr)q.push(a->left);
            }
        }

        return depth;
    }
};
