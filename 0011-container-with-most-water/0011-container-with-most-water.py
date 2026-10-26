class Solution:
    def maxArea(self, height: list[int]) -> int:
        left = 0
        right = len(height)-1
        result =0
        while left < right:
            temp = (right - left)*min(height[left],height[right])
            result = max(result,temp)
            if height[left]>height[right]:
                right -= 1
            else:
                left+=1
        return result

        