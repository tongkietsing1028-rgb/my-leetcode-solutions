class Solution:
    def minWindow(self, s: str, t: str) -> str:
        count_s={}
        count_t=Counter(t)
        left = 0
        have=0
        need=len(count_t)
        lenght = float('inf')
        result = ''
        for right in range(len(s)):
            char = s[right]
            count_s[char]=count_s.get(char,0)+1
            if char in count_t and count_s[char]==count_t[char]:
                have+=1
            while need == have:
                temp = right - left +1
                if temp < lenght:
                    lenght = temp
                    result = s[left:right+1]
                left_char = s[left]
                count_s[left_char]-=1
               
                if left_char in count_t and count_s[left_char]<count_t[left_char]:
                    have -= 1
                left += 1
        return result
                
            

        