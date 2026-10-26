class Solution:
    def moveZeroes(self, nums: list[int]) -> None:
       fast,slow=0,0
       for i in range(len(nums)):
            fast = i
            if nums[fast] != 0:
                    nums[slow],nums[fast] = nums[fast],nums[slow]
                    slow += 1

        