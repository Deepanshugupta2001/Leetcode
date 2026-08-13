class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans=-1;
        int n=nums.size();
        int s=0,e=n-1;
        if(n==1) ans=0;
        else if(n==2){
            if(nums[0]>nums[1]) ans=0;
            else ans=1;
        }
        else if(n==3){
            if(nums[0]>nums[1]) ans=0;
            else if(nums[2]>nums[1]) ans=2;
            else if(nums[1]>nums[0] and nums[2]<nums[1]) ans=1;
        }
        else{
        while(s<=e){
            int m=s+(e-s)/2;
            if(m-1>=0 and nums[m]>nums[m-1] and m+1<n and nums[m]>nums[m+1]){
                ans=m;
                break;
            }
            else if(m==0 and nums[m]>nums[m+1]){
                ans=m;
                break;
            }
            else if(m==n-1 and nums[m]>nums[m-1]){
                ans=m;
                break;
            }
            else s++;
        }
        cout<<"ans is"<<ans<<endl;
        if(ans==-1){
            s=0,e=n-1;
            while(s<=e){
            int m=s+(e-s)/2;
            if(m-1>=0 and nums[m]>nums[m-1] and m+1<n and nums[m]>nums[m+1]){
                cout<<"I am here"<<endl;
                ans=m;
                break;
            }
            else if(m==0 and nums[m]>nums[m+1]){
                ans=m;
                break;
            }
            else if(m==n-1 and nums[m]>nums[m-1]){
                ans=m;
                break;
            }
            else e--;
        }   
        }}
        return ans;
    }
};