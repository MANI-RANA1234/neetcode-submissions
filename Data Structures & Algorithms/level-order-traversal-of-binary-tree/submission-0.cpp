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
    vector<vector<int>> levelOrder(TreeNode* root) {
    
        vector<vector<int>> result;
        queue<TreeNode*> q;
        
        // What should happen if root is nullptr?
        if(root == nullptr){
            return result;
        }
        
        // Put root into the queue
        q.push(root);

        while (!q.empty()) {
            
            int size = q.size();
            vector<int> level;
            
            // Run a loop exactly `size` times
            for(int i = 0; i<size; i++){
            // Inside:
            // 1. Get the front node
            TreeNode *node = q.front();
            // 2. Remove it from queue
            q.pop();
            // 3. Add its value to `level`
            if(node->left != nullptr){
                q.push(node->left);
            }
            if(node->right != nullptr){
                q.push(node->right);
            }
            // 4. Add its left and right children to the queue if they exist
            level.push_back(node->val);

            }
            result.push_back(level);
            
            // Add `level` to result
        }
        
        return result;
}
};
