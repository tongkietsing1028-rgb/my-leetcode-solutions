class Solution:
    def largestRectangleArea(self, heights: list[int]) -> int:
       stack=[]
       largest=0
       for i in range(len(heights)+1):
          current_height = heights[i] if i < len(heights) else 0

          while stack and heights[stack[-1]] > current_height:
                height = heights[stack.pop()]
                lenght=i if not stack else i - stack[-1] -1
                largest=max(largest,(height*lenght))
          stack.append(i)
       return largest

        