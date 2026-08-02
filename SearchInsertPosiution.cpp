class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int n=nums.size();
        int s=0,e=n-1;
        bool mila=false;
        int idx;
        if(t<nums[0]) return 0;
        else if(t>nums[n-1]) return n;
        else{
            while(s<=e){
                int mid=s+(e-s)/2;
                if(nums[mid]==t){
                    mila=true;
                    idx=mid;
                    break;
                }
                else if(nums[mid]>t) e=mid-1;
                else s=mid+1;
            }
            if(mila==false){
                s=0,e=n-1;
                while(s<=e){
                    int mid=s+(e-s)/2;
                    if(nums[mid]>t){
                        if(mid-1>=s and nums[mid-1]<t ){
                            idx=mid;
                            break;            
                        }
                        else if(mid-1>=s and nums[mid-1]>t) e=mid-1;
                    }
                    else if(nums[mid]<t){
                        if(mid+1<=e and nums[mid+1]>t){
                            idx=mid+1;
                            break;
                        }
                        else{
                            s=mid+1;
                        }
                    }

                }
            }
            return idx;
        }
        
    }
};