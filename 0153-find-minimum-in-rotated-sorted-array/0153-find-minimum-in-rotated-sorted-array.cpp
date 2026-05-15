class Solution {
public:
    int findMin(vector<int>& nums) {
       int head = 0;
       int tail = nums.size()-1;
       while(head<tail)
       {
        int mid = (head + tail)/2;
        if(nums[mid]<nums[tail])
        {
            tail=mid;
        }
        else
        {
            head = mid+1;
        }
       }
       return nums[head];
    }
};