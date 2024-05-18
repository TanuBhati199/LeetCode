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
    int distributeCoins(TreeNode* root) {
        TreeNode temp;
        return dfs(root,&temp);
    }
private:
    int dfs(TreeNode* root,TreeNode* temp){
       if(root==nullptr){
        return 0;
       }
       int moves=dfs(root->left,root) + dfs(root->right, root);
       int now=root->val-1;
       temp->val+=now;
       moves+=abs(now);
       return moves;
    }
};