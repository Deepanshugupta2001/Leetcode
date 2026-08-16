class Solution {
public:
    bool check(vector<int>& nums) {
        bool once=false;
        bool ans=false;
        int cnt=0;
        int n=nums.size(),idx=-1;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]) continue;
            else if(nums[i]>nums[i+1] and once==false){
                once=true;
                idx=i;
                cnt++;
            }
            else if(nums[i]>nums[i+1] and once==true) {
                cnt++;
                once=false;
                break;
            }
        }
        cout<<cnt<<endl;
        // if(once==false|| cnt==1) ans=true;
        int minSofar=INT_MAX,maxSofar=INT_MIN;
        if( cnt==1 and idx!=-1){
            cout<<"I am here"<<endl;
            for(int i=0;i<=idx;i++){
                minSofar=min(minSofar,nums[i]);
            }
            for(int j=idx+1;j<n;j++){
                maxSofar=max(maxSofar,nums[j]);
            }
            cout<<minSofar<<" : "<<maxSofar<<endl;
        }
        if(cnt>1) ans=false;
        else if(minSofar>=maxSofar) ans=true;
        return ans;
    }
};