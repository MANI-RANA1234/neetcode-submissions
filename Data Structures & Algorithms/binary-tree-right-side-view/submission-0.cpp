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
    vector<int> rightSideView(TreeNode* root) {
        // Stores the final level-order traversal
        vector<int> result;

        // Queue to process tree nodes level by level
        queue<TreeNode*> q;

        // If the tree is empty, return an empty result
        if(root == nullptr){
            return result;
        }

        // Push the root node into the queue
        q.push(root);

        // Continue until all nodes have been processed
        while (!q.empty()) {

            // Number of nodes present at the current level
            int size = q.size();

            // Stores values of the current level
            vector<int> level;

            // Process all nodes belonging to the current level
            for(int i = 0; i < size; i++){

                // Get the front node from the queue
                TreeNode* node = q.front();

                // Remove the front node from the queue
                q.pop();

                // Store the current node's value
                level.push_back(node->val);

                // Push the left child if it exists
                if(node->left != nullptr){
                    q.push(node->left);
                }

                // Push the right child if it exists
                if(node->right != nullptr){
                    q.push(node->right);
                }
            }

            // Add the completed level to the final result
            result.push_back(level.back());
        }

        // Return the level-order traversal
        return result;
    }
};
