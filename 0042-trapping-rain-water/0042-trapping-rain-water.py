class Solution:
    def trap(self, height: list[int]) -> int:
        n=len(height)
        pre_heightest=[0 for _ in range(n)]
        suf_heightest=[0 for _ in range(n)]
        water =0
        
        for i in range(n):
            if i == 0:
             pre_heightest[i]=height[i]
             continue
            pre_heightest[i]=max(height[i], pre_heightest[i-1])
        
        for j in range(n-1,-1,-1):
            if j == n-1:
                suf_heightest[j] = height[j]
                continue
            suf_heightest[j]=max(height[j],suf_heightest[j+1])
            
        for i in range(n):
            water += min(pre_heightest[i],suf_heightest[i])-height[i]

        return water



        