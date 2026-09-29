class Solution:
            
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        r = max(piles)
        l = 1
        ans = 0 
        while( l <= r ):
            m = (l+r)//2
            t = 0
            for p in piles:
                t += math.ceil(float(p) / m)
            print(t)
            if(t <= h):
                ans = m
                r = m - 1 
            else:
                l = m + 1
        return ans

