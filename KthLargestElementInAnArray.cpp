class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        int ans;
        sort(nums.begin(),nums.end());
        int i=1;
        for(int j=n-1;j>=0;j--){
            if(i==k){
                ans=nums[j];
                break;
            }
            i++;
        }
        return ans;
    }
};