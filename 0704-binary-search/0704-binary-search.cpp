class Solution {
public:
    int search(vector<int>& nums, int target) {
        int head = 0;
        int tail = nums.size() -1 ;
        return binarySearch(head,tail,nums,target);
    }

    int binarySearch(int head,int tail,vector<int>& nums,int target)
    {
        if(head>tail)return -1;
        int middle = (tail+head)/2;
        if(nums[middle] == target )return middle;
        if(target>nums[middle])return binarySearch(middle+1,tail,nums,target);
        return binarySearch(head,middle-1,nums,target);
        
    }

};