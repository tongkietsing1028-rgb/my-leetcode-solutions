class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left = 0
        container = set()
        lenght=0
        for right in range(len(s)):     
            while s[right] in container:
                container.remove(s[left])
                left +=1
            container.add(s[right])
            lenght = max(lenght,(right-left+1))
        return lenght
                
                

        