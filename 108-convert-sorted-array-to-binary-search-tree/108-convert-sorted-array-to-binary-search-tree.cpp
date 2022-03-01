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
    TreeNode* solve(vector<int>& nums, int start, int end){
        if(end < start) return nullptr;
        int mid = start + (end-start)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = solve(nums, start, mid-1);
        root->right = solve(nums, mid+1, end);
        return root;
    }
    void lside(vector<int> nums, int index, TreeNode* prev){
        if(index<0){
            return;
        }
        else{
            TreeNode* temp=new TreeNode(nums[index]);
            if(prev->val >temp->val){
                prev->left=temp;
            }
            else{
                prev->right=temp;
            }
            prev=temp;
            lside(nums, index-1,prev);
            
        }
    }
        void rside(vector<int> nums, int index1, TreeNode* prev){
        if(index1>=nums.size()){
            return;
        }
        else{
             TreeNode* temp=new TreeNode(nums[index1]);
            if(prev->val >temp->val){
                prev->left=temp;
            }
            else{
                prev->right=temp;
            }
            prev=temp;
            rside(nums, index1+1,prev);
            
        }
    }
    TreeNode* sortedArrayToBST(vector<int>& nums)  {
        return solve(nums, 0, nums.size()-1);
    }
};