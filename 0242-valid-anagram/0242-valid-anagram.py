class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        else:
            ls = set(s)
            for char in ls:
                if s.count(char) != t.count(char):
                    return False
        
        return True
        