class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        left = 0
        dic={}
        max_freq=0
        max_lenght=0
        for right in range(len(s)):
            dic[s[right]]=dic.get(s[right],0)+ 1

            max_freq=max(max_freq,dic[s[right]])

            while (right - left + 1) - max_freq > k:
                dic[s[left]] -= 1
                left += 1

            max_lenght = max(max_lenght,right - left + 1)

        return max_lenght


        