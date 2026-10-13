class Solution:
    def calPoints(self, operations: List[str]) -> int:
        stack = []
        for op in operations:
            if(op == '+'):
                one = stack[-1]
                two = stack[-2]
                stack.append(int(one)+int(two))
            elif(op == 'D'):
                stack.append(int(int(stack[-1])*2))
            elif(op == 'C'):
                stack.pop()
            else:
                stack.append(op)
        sol = 0 
        while(len(stack)>0):
            sol += int(stack[-1])
            stack.pop()
        return sol