class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector <vector<int>> ans;
        for(int i =0;i<n-1;i++)
        {
            if(i>0&&nums[i]==nums[i-1])continue;
            for(int j = i+1;j<n;j++)
            {
                 if(j>i+1&&nums[j]==nums[j-1]){continue;}
                 int head = j+1;
                 int tail = n-1;
                 while(head<tail)
                 {
                    long long sum = (long long)nums[i]+nums[j]+nums[head]+nums[tail];
                    if(sum == target)
                        {
                            ans.push_back({ nums[i],nums[j],nums[head],nums[tail]});
                            head++;
                            tail--;
                            while(head<tail&&nums[head]==nums[head-1])head++;
                            while(head<tail&&nums[tail]==nums[tail+1])tail--;
                        }
                    
                    else if(sum < target)
                        {head++;}
                    else
                        { tail--;}
                 }
                 
            }
        }
        return ans;
    }
};