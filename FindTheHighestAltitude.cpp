class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> nums(n+2);
        nums[0]=0;
        nums[1]=gain[0];
        for(int i=1;i<n;i++){
            // cout<<"gain[i+1]: "<<gain[i+1]<<endl;
            // cout<<"gain[i]: "<<gain[i]<<endl;
            nums[i+1]=nums[i]+gain[i];
            // cout<<"nums[i+2]: "<<nums[i+2]<<endl;
        }

        sort(nums.begin(),nums.end());
        // for(int i=0;i<n+2;i++){
        //     cout<<nums[i]<<endl;
        // }
        int a=nums.size();
        return nums[a-1];
    }
};