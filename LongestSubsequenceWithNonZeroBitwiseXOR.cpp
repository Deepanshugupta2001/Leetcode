class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        bool mila=false;
        for(int i=0;i<n;i++){
            ans=(ans^nums[i]);
            if(nums[i]!=0){
                mila=true;
            }
        }
        if(ans!=0) return n;
        if(mila) return n-1;
        return 0;
    }
};