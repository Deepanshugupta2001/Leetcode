class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n=nums.size();
        bool ans=true;
        if(n==1) return true;
        else{
            for(int i=0;i<n-1;i++){
                if(nums[i]%2==0 and nums[i+1]%2!=0) continue;
                else if(nums[i]%2!=0 and nums[i+1]%2==0) continue;
                else{
                    ans=false;
                    break;
                }
            }
            return ans;
        }
    }
};