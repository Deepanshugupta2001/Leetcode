class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size();
        // vector<int> left,right;
        // left.push_back(nums[0]);
        // for(int i=1;i<n ;i++){
        //     int l=left.size();
        //     for(int o=0;o<l;o++){
        //     if(nums[i]<=left[o]){
        //         left.push_back(nums[i]);
        //         break;
        //     }
        //     // else if(nums[i]>left[o]){
        //     //     right.push_back(nums[i]);
        //     // }
        //     }
        //     right.push_back(nums[i]);
        // }
        // int k=left.size();
        // return k;
        // int o=n/2;
        // int min=INT_MAX;
        // vector<int> minimums;
        // for(int i=0;i<n;i++) {
        //     if(min>nums[i]) {
        //         min=nums[i];
        //         minimums.push_back(min);
        //     }
        //     else minimums.push_back(min);
        // }
        // for(int j=0;j<n;j++){
        //     if(nums[j]<=minimums[j]){
        //         left.push_back(nums[j]);
        //     }
        //     else if(nums[j]>minimums[j])
        // } 

        int minimum=nums[0],maximum=nums[0];
        int index=0;
        for(int i=1;i<n;i++){
            if(nums[i]<minimum){
                index=i;
                minimum=maximum;
            }
            maximum=max(nums[i],maximum);
        }
        return index+1;
    }       
};