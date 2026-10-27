class Solution:
    def minWindow(self, s: str, t: str) -> str:
        counter_t = Counter(t)
        counter_s={}

        have=0
        need=len(counter_t)

        min_lenght = float('inf')

        result=''
        left =0
        for right in range(len(s)):
            char=s[right]
            counter_s[char]=counter_s.get(char,0)+1
            if  char in counter_t and counter_s[char] == counter_t[char]:
                have +=1
            while have == need:
                lenght = right - left + 1
                if lenght< min_lenght:
                    min_lenght = lenght
                    result = s[left:right+1]
                left_char = s[left]
                if left_char in counter_t and counter_t[left_char]==counter_s[left_char]:
                   have -= 1
                
                counter_s[left_char] -=1
                left += 1

        return result

                
            

        