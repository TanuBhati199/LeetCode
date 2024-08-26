class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> result;
        postorderHelper(root, result);
        return result;
    }

private:
    void postorderHelper(Node* node, vector<int>& result) {
        if (!node) return;

        // Visit all the children first
        for (Node* child : node->children) {
            postorderHelper(child, result);
        }
        
        // Visit the current node
        result.push_back(node->val);
    }
};