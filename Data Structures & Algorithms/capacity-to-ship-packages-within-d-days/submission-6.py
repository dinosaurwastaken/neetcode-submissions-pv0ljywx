class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        l = max(weights)
        r = sum(weights)
        sol = 1000
        if(days == 1):
            return r
        while(l < r):
            m = (l+r)//2
            d = 0
            s = 0
            print("m " + str(m))
            for w in weights:
                    s = s + w
                    if s == m:
                        d = d + 1
                        s = 0
                    elif s > m:
                        d = d + 1
                        s = w
            if(s != 0):
                d = d + 1
            print("days " + str(d))
            if(d <= days):
                sol = min(sol,m)
                r = m  
            else:
                l = m + 1                
        if(sol == 1000):
            return m        
        return sol