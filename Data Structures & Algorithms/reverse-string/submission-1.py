class Solution:
    def reverseString(self, s: List[str]) -> None:
        n = len(s)
        nhalf = n//2
        for i in range(nhalf):
            t = s[n-1-i]
            s[n-1-i] = s[i]
            s[i] = t
            
        