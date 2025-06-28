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
    int getMinimumDifference(TreeNode* root) {
       vector<int>v;
        addDiff(root,v);
        int minDiff=INT_MAX;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
           minDiff=min(minDiff,v[i+1]-v[i]);
        }
       return minDiff;
        
    }
    void addDiff(TreeNode* root, vector<int>&v){
        if(!root)return;
        addDiff(root->left,v);
        v.push_back(root->val);
        addDiff(root->right,v);
       
    }
};