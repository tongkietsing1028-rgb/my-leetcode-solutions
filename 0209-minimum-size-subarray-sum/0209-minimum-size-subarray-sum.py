class Solution:
    def minSubArrayLen(self, target: int, nums: list[int]) -> int:
        left = 0
        lenght = float('inf')
        total = 0
        for right in range(len(nums)):
            total += nums[right]
            while total>=target:
                temp = right - left + 1
                lenght = min(lenght,temp)
                total -= nums[left]
                left += 1
        return 0 if lenght == float('inf') else lenght
            

        