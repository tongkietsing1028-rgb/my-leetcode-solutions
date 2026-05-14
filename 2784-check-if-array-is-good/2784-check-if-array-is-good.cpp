class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int max = nums.back();
        for(int i =0;i<max;i++)
        {
            if(nums[i]!= i+1)return false;
        }
        return max == n-1;
    }
};