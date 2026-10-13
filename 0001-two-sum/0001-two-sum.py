class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
      dic = {}
      for i,num in enumerate(nums):
        y = target - num
        if  y in dic:
            return [dic[y],i]
        
        dic[num] = i
        
        

    
      return []

                
       