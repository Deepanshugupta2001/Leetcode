class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),prev=nums[0],ctr=1,k=0;
        vector<int> ans(2);
        for(int i=1;i<n;i++){
            if(nums[i]==prev){
                ctr++;
            }
            else if(nums[i]!=prev and ctr==2){
                prev=nums[i];
                ctr=1;
            }
            else {
                ans[k++]=prev;
                prev=nums[i];
                ctr=1;
            }
        }
        if(k==1) ans[1]=nums[n-1];
        return ans;
    }
};