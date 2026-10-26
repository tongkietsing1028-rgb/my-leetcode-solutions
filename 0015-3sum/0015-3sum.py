class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        nums.sort()
        result = []
        for i in range(len(nums)-2):
            if nums[i]>0:
                break
            
            if i > 0 and nums[i]==nums[i-1]:
                continue
            head = i +1
            tail = len(nums)-1
            while(tail > head):
                total = nums[i]+nums[head]+nums[tail]
                if total < 0:
                    head += 1
                elif total > 0:
                    tail -= 1
                else:
                    result.append([nums[i],nums[head],nums[tail]])
                    head += 1
                    tail -= 1
                    while head < tail and nums[head] == nums[head-1]:
                        head += 1    
                    while head < tail and nums[tail] == nums[tail +1]:
                        tail -= 1
                
        return result

        