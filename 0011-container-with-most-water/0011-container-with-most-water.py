class Solution:
    def maxArea(self, height: list[int]) -> int:
        max_v = 0
        n = len(height)-1

        head = 0
        tail = n
        while(head<tail):
            v = (tail - head) * min(height[head],height[tail])
            max_v = max(max_v,v)
            if height[head]>height[tail]:
                tail -= 1
            else:
                head += 1
        return max_v


        