class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int l = 0, r = 0, result = 0;

        while (r < s.size()) {
            if (!st.count(s[r])) {
                st.insert(s[r]);
                r++;
                result = max(result, r - l);
            } else {
                st.erase(s[l]);
                l++;
            }
        }

        return result;
    }
};