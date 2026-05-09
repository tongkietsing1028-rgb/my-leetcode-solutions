class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        if(n<3)return ans;
        for(int i =0;i<n-2;i++)
        {
            if(i>0 && nums[i]== nums[i-1])continue;
            int j = i+1;
            int t = n-1;
            while(j<t)
            {
                int sum = nums[i]+nums[j]+nums[t];
                if(sum<0)
                {
                    j++;
                }
                else if(sum>0)
                {
                    t--;
                }
                else
                {
                    ans.push_back({nums[i],nums[j],nums[t]});
                    j++;
                    t--;
                    while(j<t&&nums[j]==nums[j-1])
                    {
                        j++;
                    }
                    while(j<t&&nums[t]==nums[t+1])
                    {
                        t--;
                    }
                }
            }
        }
        return ans;
    }
};