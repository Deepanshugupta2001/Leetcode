class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        int ans;
        for(int i=1;i<101;i++){
            bool mila=false;
            for(int j=0;j<n;j++){
                if(nums[j]==(i*k)){
                    mila=true;
                    break;
                }
            }
            if(mila==false) {
                ans=k*i;
                break;
            }
        }
        return ans;
    }
};