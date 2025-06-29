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

TreeNode* buildTreeRecursive( vector<int>& preorder, int preorderStart, int preorderEnd, vector<int>& inorder, int inorderStart, int inorderEnd, unordered_map<int, int>& inorderIndexMap) {

    if (preorderStart > preorderEnd || inorderStart > inorderEnd) return nullptr;

    TreeNode* root = new TreeNode(preorder[preorderStart]);

    int rootIndexInInorder = inorderIndexMap[preorder[preorderStart]];
    int leftSubtreeSize = rootIndexInInorder - inorderStart;

    root->left = buildTreeRecursive(preorder, preorderStart + 1, preorderStart + leftSubtreeSize, inorder, inorderStart, rootIndexInInorder - 1, inorderIndexMap);

    root->right = buildTreeRecursive(preorder, preorderStart + leftSubtreeSize + 1, preorderEnd, inorder, rootIndexInInorder + 1, inorderEnd, inorderIndexMap );

    return root;
} 

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    unordered_map<int, int> inorderIndexMap;
    for (int i = 0; i < inorder.size(); i++)  inorderIndexMap[inorder[i]] = i;
    TreeNode* root = buildTreeRecursive(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1,inorderIndexMap );
    return root;
}
};