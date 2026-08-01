class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n=nums.size();
        for(int i=1;i<=k;i++){
            int mini=INT_MAX;
            int idx;
            for(int k=0;k<n;k++){
                if(nums[k]<mini){
                    idx=k;
                    mini=nums[k];
                }
            }
            nums[idx]*=multiplier;
        }
        return nums;
    }
};