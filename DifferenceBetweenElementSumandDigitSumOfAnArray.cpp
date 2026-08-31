class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int es=0,ds=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            es+=nums[i];
            while(nums[i]){
                int k=nums[i]%10;
                ds+=k;
                nums[i]/=10;
            }
        }
        return abs(es-ds);
    }
};