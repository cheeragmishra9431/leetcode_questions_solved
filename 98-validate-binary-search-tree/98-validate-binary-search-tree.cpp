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
    bool helper(TreeNode* root, long lmin, long rmax){
        if(root==NULL){
            return true;
        }
        if(root->val <=lmin || root->val >= rmax){
            return false;
        }
        return helper(root->left, lmin, root->val) && helper(root->right, root->val, rmax);
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        return helper(root,LONG_MIN, LONG_MAX);
    }
};