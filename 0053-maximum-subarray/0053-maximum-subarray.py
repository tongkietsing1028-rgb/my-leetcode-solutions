class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
       current = nums[0]
       largest = nums[0]

       for i in range(1,len(nums)):
            current = max(nums[i],current+nums[i])
            largest = max(largest,current)

       return largest

        