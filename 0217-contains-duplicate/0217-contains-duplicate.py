class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        temp = set()
        for num in nums:
            if num in temp :
                return True
            
            temp.add(num)

        return False