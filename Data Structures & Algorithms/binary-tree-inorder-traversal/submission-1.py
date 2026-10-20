# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorder(self,root:Optional[TreeNode],sol:List):
        if root == None:
            return 
        else:
            self.inorder(root.left,sol)
            sol.append(root.val)
            self.inorder(root.right,sol)
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        sol = []
        self.inorder(root,sol)
        return sol