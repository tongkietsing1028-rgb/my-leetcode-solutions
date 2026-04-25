class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> min ;
        for(int v : nums)
        {
            min.push(v);
            if(min.size()>k)
            {
                min.pop();
            }
        }
        return min.top();
    }
};