class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int head = 0;
        int tail = nums.size()-1;
        while(head<tail)
        {
            int mid = (head+tail)/2;
            if(nums[mid]>nums[tail])
            {
                head = mid+1;
            }
            else if(nums[mid]<nums[tail])
            {
                tail = mid;
            }
            else
            {
                tail--;
            }
        }
        return nums[head];
    }
};