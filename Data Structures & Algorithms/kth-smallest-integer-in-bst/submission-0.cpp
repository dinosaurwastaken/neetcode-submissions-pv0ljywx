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
    int kthSmallest(TreeNode* root, int k) {
        inorderTraversal(root);
        return sol[k-1];
    }
    int nodes(TreeNode* root , int &x){
        if(root == nullptr) return 0;
        if(root) x++;
        nodes(root->left,x);
        nodes(root->right,x);
        return x;
    }
    vector<int> sol;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == nullptr) return {};
        inorderTraversal(root->left);
        sol.push_back(root->val);
        inorderTraversal(root->right);
        return sol;
    }
};
