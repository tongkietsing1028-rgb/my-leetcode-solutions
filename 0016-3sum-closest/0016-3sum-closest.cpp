class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        for(int i = 0;i<n-2;i++)
        {
            int j = i+1;
            int t = n-1;
            while(j<t)
            {
                int sum = nums[i]+nums[j]+nums[t];
                if(abs(target-sum)<abs(target- ans))
                {
                    ans = sum;
                }
                if(sum < target)
                {
                    j++;
                }
                else if(sum>target)
                {
                    t--;
                }
                else
                {
                    return target;
                }
                
            }
        }
        return ans;
        
    }
};