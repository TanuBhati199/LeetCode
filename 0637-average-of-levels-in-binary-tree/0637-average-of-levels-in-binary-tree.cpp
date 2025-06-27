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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>res;
        if(root==nullptr) return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
        double avg=0;
        int level=q.size();
        for(int i=0;i<level;i++){
            TreeNode* nodeval=q.front();
            q.pop();
            if(nodeval->right)q.push(nodeval->right);
            if(nodeval->left)q.push(nodeval->left);
            avg+=nodeval->val;
        }
        avg=avg/level;
        res.push_back(avg);
        }
   return res; }
};