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
    TreeNode* f(vector<int>& preorder, vector<int>& inorder, int l, int h, int& idx, unordered_map<int, int>& mp){
        if(l>h) return NULL;
        TreeNode* root = new TreeNode(preorder[idx]);
        int id = mp[preorder[idx++]];
        root->left = f(preorder, inorder, l, id-1, idx, mp);
        root->right = f(preorder, inorder, id+1, h, idx, mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> mp;
        int n = preorder.size();
        for(int i=0; i<n; i++){
            mp[inorder[i]] = i;
        }
        int idx = 0;
        return f(preorder, inorder, 0, n-1, idx, mp);
    }
};
