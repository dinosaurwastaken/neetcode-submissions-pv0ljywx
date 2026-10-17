class Solution:
    '''
    def removeElement(self, nums: List[int], val: int) -> int:
        sol = []
        for num in nums:
            if(num != val):
                sol.append(num)
        nums[:] = sol
        return len(sol)
    '''
    def removeElement(self, nums: List[int], val: int) -> int:

        counter = 0
        l , r = 0 , len(nums) - 1

        while( r >= 0 and nums[r] == val ):
            r -= 1
            counter += 1
        
        while(l < r):
            if(nums[l] == val):
                counter+=1
                nums[l],nums[r] = nums[r],nums[l]
                r-=1
            l+=1
            while(nums[r] == val):
                r -= 1
                counter+=1
        return len(nums)-counter


