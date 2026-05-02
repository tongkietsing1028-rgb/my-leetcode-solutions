class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size())return findMedianSortedArrays(nums2,nums1);
        int s1 = nums1.size();
        int s2 = nums2.size();
        int left = 0;
        int right = nums1.size();
        while(left<=right)
        {
            int i =(left + right)/2;
            int j = (s1+s2+1)/2 - i;

            int leftMaxA = (i == 0)?INT_MIN : nums1[i-1];
            int rightMinA = (i == s1)?INT_MAX : nums1[i];
            int leftMaxB = (j == 0)?INT_MIN : nums2[j-1];
            int rightMinB = (j == s2)?INT_MAX : nums2[j];
            if(leftMaxA<=rightMinB && leftMaxB <= rightMinA)
            {
                if((s1+s2)%2==0)
                {
                    return (max(leftMaxA,leftMaxB)+min(rightMinA,rightMinB))/2.0;
                }
                else return max(leftMaxA,leftMaxB);
            }
            else if(leftMaxA>rightMinB)
            {
                right = i -1;
            }
            else
            {
                left = i+1;
            }
        }
        return 0.0;
    }
};