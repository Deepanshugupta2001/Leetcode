class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int f,e,f1=nums[i];
                while(f1){
                    if(f1/10==0) f=f1;
                    f1=f1/10; 
                }
                e=nums[j]%10;
                int a=gcd(f,e);
                if(a==1) ans++;
            }
        }
        return ans;
    }
};