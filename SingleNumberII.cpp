class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),prev=nums[0],ans;
        int ctr=1;
        bool mila=false;
        for(int i=1;i<n;i++){
            if(nums[i]==prev) ctr++;
            else if(ctr==3 and nums[i]!=prev ){
                prev=nums[i];
                ctr=1;
            }
            else if(ctr!=3 and nums[i]!=prev){
                ans=prev;
                mila=true;
                break;
            }
        }
        return ans;
    }
};