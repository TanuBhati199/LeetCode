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
        return isMirror(root->left,root->right);
    }

private:
    bool isMirror(TreeNode* leftnode,TreeNode* rightnode){
        if(leftnode==nullptr&&rightnode==nullptr) return true;
        if(leftnode==nullptr || rightnode==nullptr) return false;
        return (leftnode->val==rightnode->val) && isMirror(leftnode->left,rightnode->right) && isMirror(leftnode->right,rightnode->left);
    }    
};