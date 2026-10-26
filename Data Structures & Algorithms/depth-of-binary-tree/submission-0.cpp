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
    int maxDepth(TreeNode* root) {
        // 1. Base case
        if (root == nullptr){
            return 0;
        }
        

        // 2. Find the left subtree's depth
        int lmax = maxDepth(root->left);
        
        // 3. Find the right subtree's depth
        int rmax = maxDepth(root->right);

        // 4. Return the combined result
        return max(lmax,rmax)+1;
    }
};