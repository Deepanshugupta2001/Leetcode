class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]<=nums[j] and nums[i]<=nums[k]) {
                        int s=nums[j]+nums[k]-nums[i];
                        maxi=max(s,maxi);
                    }
                    else if(nums[j]<=nums[i] and nums[j]<=nums[k]){
                        int s=nums[i]+nums[k]-nums[j];
                        maxi=max(maxi,s);
                    }
                    else {
                        int s=nums[i]+nums[j]-nums[k];
                        maxi=max(maxi,s);
                    }
                }
            }
        }
        return maxi;
    }
};