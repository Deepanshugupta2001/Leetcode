class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        int mini =*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        int z=maxi-mini+1;
        int arr[101]={};
        for(int i=0;i<n;i++){
            arr[nums[i]-mini]++;
        }
        vector<int> ans;
        for(int i=0;i<z;i++){
            if(arr[i]==0){
                ans.push_back(i+mini);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};