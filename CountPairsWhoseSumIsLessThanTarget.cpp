class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n=nums.size(),ans=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int s=nums[i]+nums[j];
                if(s<target) ans++;
            }
        }
        return ans;
    }
};