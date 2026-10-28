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


    int height(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int lmax = height(root->left);
        int rmax = height(root->right);

        return max(lmax, rmax) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
         if (root == nullptr) {
            return true;
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        int currentnode = abs(leftHeight-rightHeight);

        if(currentnode>1){
            return false;
        }

        else {
            if(isBalanced(root->left) && isBalanced(root->right)){
            return true;
            }
            else return false;
        }
    }
};
