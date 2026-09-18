class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(),i=0,j=n-1;
        vector<int> ans(2);
        while(i<j){
            int s=nums[i]+nums[j];
            if(s==target){
                ans[0]=i+1;
                ans[1]=j+1;
                break;
            }
            else if(s<target) i++;
            else if(s>target) j--;
        }
        return ans;
    }
};