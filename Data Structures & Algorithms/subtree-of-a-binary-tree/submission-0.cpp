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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!subRoot) {
            return true;
        }
        if (!root) {
            return false;
        }
        if(isSameTree(root,subRoot))
            return true;
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
    bool isSameTree(TreeNode*currTree,TreeNode*subTree){
        if(currTree == nullptr && subTree == nullptr) return true;
        if(currTree && subTree && currTree->val == subTree->val){
            return isSameTree(currTree->left,subTree->left) && isSameTree(currTree->right,subTree->right);
        }
        return false;
    }
};
