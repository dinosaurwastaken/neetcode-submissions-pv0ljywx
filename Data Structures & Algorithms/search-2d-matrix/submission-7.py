class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        rows = len(matrix)
        cols = len(matrix[0])
        l , r = 0 , rows-1

        while( l <= r ):
            m = (l+r) // 2
            if(matrix[m][-1] == target):
                return True
            elif(matrix[m][-1] < target):
                l = m + 1
            elif(matrix[m][-1] > target):
                if(matrix[m][0] <= target):
                    break
                r = m - 1            
        print(m)
        
        l , r = 0 , cols - 1
        while(l <= r):
            m2 = (l+r) // 2
            if(matrix[m][m2] == target):
                return True
            elif(matrix[m][m2] < target):
                l = m2 + 1
            else:
                r = m2 - 1
                
        return False 