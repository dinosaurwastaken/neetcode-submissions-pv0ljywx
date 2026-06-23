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
    bool check = true;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr || q == nullptr){
            if(q!= nullptr) check = false;
            if(p!= nullptr) check = false;
            return check;
        }
        if(p->val != q->val)
            check = false;
        isSameTree(p->left,q->left);
        isSameTree(p->right,q->right);
        return check;
    }
};
