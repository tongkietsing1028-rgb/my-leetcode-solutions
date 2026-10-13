class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s="".join(sorted(s))
        t ="".join(sorted(t))
        if(len(s)!= len(t)):
            return False
        return Counter(s) == Counter(t)

        