class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        sol = []
        for num in nums:
            if(num != val):
                sol.append(num)
        nums[:] = sol

        return len(sol)