class Solution:
    def isPalindrome(self, s: str) -> bool:
        remove_char = string.punctuation + " "
        text = s.translate(str.maketrans("","",remove_char))
        text_ = text[::-1]
        return text.lower() == text_.lower()