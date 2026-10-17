class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        counter = 0
        n = len(nums)
        l , r = 0 , n - 1

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
                
        return n-counter


