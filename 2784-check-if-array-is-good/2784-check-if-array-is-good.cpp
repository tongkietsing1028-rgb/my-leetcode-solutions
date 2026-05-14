class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int mx = nums.back();
        for(int i =0;i<mx;i++)
        {
            if(nums[i]!= i+1)return false;
        }
        return mx == n-1;
    }
};