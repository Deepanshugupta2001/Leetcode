class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans;
        int ctr=nums[0]+1;
        if(nums[0]!=0) return 0;
        for(int i=1;i<n;i++){
            if(nums[i]!=ctr){
                ans=ctr;
                break;
            }
            else{
                ctr=nums[i]+1;
            }
        }
        return ans;
    }
};