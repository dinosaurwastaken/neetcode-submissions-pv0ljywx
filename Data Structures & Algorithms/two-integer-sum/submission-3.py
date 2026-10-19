class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        needed = {}
        for i in range(len(nums)):
            diff = target - nums[i]
            n = needed.get(diff)
            if n != None:
                return [n,i]
            needed[nums[i]]=i