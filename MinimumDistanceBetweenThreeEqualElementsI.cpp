class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        bool mila=false;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]==nums[j] and nums[j]==nums[k]){
                        int d=abs(i-j)+abs(j-k)+abs(k-i);
                        mini=min(mini,d);
                        mila=true;
                    }
                }
            }
        }
        if(mila==false) mini=-1;
        return mini;
    }
};