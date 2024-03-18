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
    bool isSymmetric(TreeNode* root) {
        return help(root->left, root->right);
    }
    bool help(TreeNode* left, TreeNode* right){
        if(left==nullptr&&right==nullptr) return 1;
        if((left!=nullptr&&right==nullptr)||(left==nullptr&&right!=nullptr)) return 0;
        return (left->val==right->val)&&help(left->right, right->left)&&help(left->left,right->right);
    }
};