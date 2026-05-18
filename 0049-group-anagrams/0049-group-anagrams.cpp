class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        int n = strs.size();
        for(int i =0;i<n;i++)
        {
           string y = strs[i];
           sort(y.begin(),y.end());
           mp[y].push_back(strs[i]);
        }
        for(auto &k:mp)
        {
            ans.push_back(k.second);
        }
        return ans;
    }
};