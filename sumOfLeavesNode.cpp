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
    int totalSum=0;
    void preOrder(TreeNode* root,int currSum){
        if(root==NULL){
            return;
        }
        currSum=currSum*10+root->val;
        if(root->left==NULL and root->right==NULL){
            totalSum+=currSum;
        }
        preOrder(root->left,currSum);
        preOrder(root->right,currSum);
    }
    int sumNumbers(TreeNode* root) {
        preOrder(root,0);
        return totalSum;
    }
};