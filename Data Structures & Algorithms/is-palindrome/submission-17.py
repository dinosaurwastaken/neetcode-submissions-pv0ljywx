class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=s.lower()
        print(s)
        l , r = 0 ,len(s)-1
        while l < r:
            print(s[l] + " l r " + s[r])
            if(not(s[l].isalnum()) or not(s[r].isalnum())):
                if(not(s[r].isalnum())):
                    r-=1
                if(not(s[l].isalnum())):
                    l+=1
            elif s[l]!=s[r]:
                return False
            else:
                l+=1
                r-=1
        return True
