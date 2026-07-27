class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int max=INT_MIN,max2=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>max){
                max2=max;
                max=nums[i];
            }
            else if(nums[i]>max2){
                max2=nums[i];
            }
        }
        return (max-1)*(max2-1);
    }
    
};