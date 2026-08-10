class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        vector<double> ans(n/2);
        sort(nums.begin(),nums.end());
        int k=0,m=n-1;
        while(k<n/2){
            int mini=nums[k];
            int maxi=nums[m];
            double a=(mini+maxi)/2.0;
            ans[k]=a;
            k++;
            m--;
        }
        return *min_element(ans.begin(),ans.end());
    }
};