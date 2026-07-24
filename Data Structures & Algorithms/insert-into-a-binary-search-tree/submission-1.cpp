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

    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == nullptr){
            return new TreeNode(val);
        }
        TreeNode* mover = root;
        while(true){
            if(val > mover->val){
                if(mover->right == nullptr){
                    mover->right = new TreeNode(val);
                    break;
                }
                mover = mover->right;
            }
            else if(val < mover->val){
                if(mover->left == nullptr){
                    mover->left = new TreeNode(val);
                    break;
                }
                mover = mover->left;
            }
            
        }
        return root;
    }
};