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
private:
       int solve(TreeNode* root,int &cnt){
        if(root==nullptr)return cnt;
        cnt++;
        solve(root->left,cnt);
        solve(root->right,cnt);
       return cnt;
       }     
public:
    int countNodes(TreeNode* root) {
     int cnt=0;
     solve(root,cnt);
     return cnt;
    }
};