class Solution:
    def minWindow(self, s: str, t: str) -> str:
        count_t = Counter(t)
        count_s={}
        result=''
        left = 0 
        lenght = float('inf')
        for right in range(len(s)):
            count_s[s[right]]=count_s.get(s[right],0)+1
            while(all(count_s.get(char,0)>= need for char,need in count_t.items())):
                temp = right-left+1
                if temp<lenght:
                    lenght = temp
                    result = s[left:right+1]

                count_s[s[left]] -= 1
                left += 1

        return result
            

        