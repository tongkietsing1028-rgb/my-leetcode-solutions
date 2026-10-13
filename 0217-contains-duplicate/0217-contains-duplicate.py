class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
       a = set(nums)
       return len(a) != len(nums)