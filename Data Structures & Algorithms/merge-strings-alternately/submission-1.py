class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        sol = ""
        l1 , l2 = len(word1), len(word2)
        c1 , c2 = 0 , 0
        while(c1 < l1 and c2 < l2):
            sol+=(word1[c1])
            sol+=(word2[c2])
            c1+=1
            c2+=1
        
        while(c1<l1):
            sol+=(word1[c1])
            c1+=1
        
        while(c2<l2):
            sol+=(word2[c2])
            c2+=1
        
        return sol