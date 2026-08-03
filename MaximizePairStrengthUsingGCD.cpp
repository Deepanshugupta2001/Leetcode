class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                long long g=gcd(nums[i],nums[j]);
                nums[i]=nums[i]*1.0;
                long long s=(1LL*nums[i]*nums[j])/(g*g);
                if(s>ans) ans =s;
            }
        }
        return ans;
    }
};