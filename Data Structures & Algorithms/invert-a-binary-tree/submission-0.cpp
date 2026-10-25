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
    TreeNode* invertTree(TreeNode* root) {
        // 1. Handle the base case
        if (root == nullptr) {
            return nullptr;
        }

        // 2. Swap left and right children
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        
        // 3. Recursively invert both subtrees
        invertTree(root->left);
        invertTree(root->right);

        // 4. Return the root
        return root;
    }
};

