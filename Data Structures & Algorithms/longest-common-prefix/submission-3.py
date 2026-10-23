class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        first = ""
        if len(strs) != 0:
            first = strs[0]
        else:
            return ""
        sol = ""
        for ptr in range(len(first)):
            for string in strs:
                if(len(string)-1 < ptr):
                    return sol
                elif string[ptr] != first[ptr]:
                    return sol
            sol+=string[ptr]
        return sol
        
            