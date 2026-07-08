class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        l , r = 0 , len(nums)-1
        sol = len(nums)
        while l <= r : 
            m = (l + r) // 2
            if nums[m] == target:
                return m
            elif nums[m] > target:
                r = m - 1
                sol = m 
            else:
                l = m + 1
        return sol