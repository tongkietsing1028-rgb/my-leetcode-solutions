class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        for(int i =0;i<n;i++)
        {
            string c = to_string(nums[i]);
            for(char v: c)
            {
                ans.push_back(v-'0');
            }
        }
        return ans;
    }
};