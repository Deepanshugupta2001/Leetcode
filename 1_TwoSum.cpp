class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    sum.push_back(i);
                    sum.push_back(j);
                }
            }
        }
        sort(sum.begin(),sum.end());
        return sum;
    }
};