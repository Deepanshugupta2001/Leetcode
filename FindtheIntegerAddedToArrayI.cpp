class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int x=0;
        if(nums1[0]==nums2[0]) x=0;
        else if(nums1[0]>nums2[0]) x=(nums1[0]-nums2[0])*-1;
        else x=nums2[0]-nums1[0];
        return x;
    }
};