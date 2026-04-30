class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,result=0;
        unordered_map <char,int> mp;
        while(r<s.size())
        {
            if(!mp.count(s[r]))
            {
                mp[s[r]]=1;
                r++;
                result=max(result, r-l );
                
            }
            else if(mp.count(s[l]))
            {
                mp.erase(s[l]);
                l++;
            }
        }
        return result;

    }
};