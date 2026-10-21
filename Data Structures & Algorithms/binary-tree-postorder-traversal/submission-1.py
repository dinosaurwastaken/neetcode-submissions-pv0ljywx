# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def postOrder(self,root:Optional[TreeNode],sol:list):
        if root == None:
            return
        else:
            self.postOrder(root.left,sol)
            self.postOrder(root.right,sol)
            sol.append(root.val)

    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        sol = []
        self.postOrder(root,sol)
        return sol