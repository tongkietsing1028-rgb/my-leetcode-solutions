class Solution:
    def twoSum(self, numbers: list[int], target: int) -> list[int]:
        head = 0
        tail = len(numbers) -1
        result=[]
        while tail > head:
            total = numbers[head] + numbers[tail]
            if total == target:
                result = [head+1,tail+1]
                break
            
            if total < target:
                head += 1
            else:
                tail -= 1
        return result