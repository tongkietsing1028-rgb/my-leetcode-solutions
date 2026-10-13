class Solution:
    def longestConsecutive(self, nums: list[int]) -> int:
        new_nums = set(nums)
        longest = 0
        for i in new_nums:
            if i - 1 not in new_nums:
                current = i
                lenght = 1

                while current + 1 in new_nums:
                    current += 1
                    lenght += 1
                
                longest = max(longest,lenght)
        return longest