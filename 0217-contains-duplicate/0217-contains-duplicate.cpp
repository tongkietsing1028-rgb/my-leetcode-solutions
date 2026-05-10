class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      unordered_map<int,int> mp;
      if(nums.size()<2)return false;
      for(int i=0;i<nums.size();i++)
      {
        if(mp.find(nums[i])==mp.end())
        {
            mp[nums[i]]=1;
        }
        else
        {
            return true;
        }

      }
      return false;
    }
};