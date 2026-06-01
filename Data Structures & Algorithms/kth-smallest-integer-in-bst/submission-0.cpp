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
    void ino(TreeNode* root, vector<int>& ans){
        if(!root) return;
        ino(root->left, ans);
        ans[0]--;
        if(ans[0]==0){
            ans[1] = root->val;
            return;
        }
        ino(root->right, ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans(2,0);
        ans[0] = k;
        ino(root, ans);
        return ans[1];
    }
};
