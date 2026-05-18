class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(string&s:strs)
        {
            string key(26,0);
            for(char c: s)
            {
                int n = c - 'a';
                key[n]++;
            }
            mp[key].push_back(s);
        }
        mp.reserve(mp.size());
        for(auto& k :mp)
        {
            ans.push_back(k.second);
        }
        return ans;
    }
};