class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
            
        temp = {}
        
        for char in s:
         temp[char] = temp.get(char,0)+1
        
        for char in t:
            if char not in temp:
                return False

            temp[char] -= 1

            if temp[char] < 0:
                return False
            
        return True
        