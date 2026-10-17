class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        sol = []
        for num in nums:
            if(num != val):
                sol.append(num)
        for i in range(len(sol)):
            nums[i] = sol[i]
        return len(sol)