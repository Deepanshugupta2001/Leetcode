class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        bool ans=false;
        int idx;
        bool oddmila=false;
        for(int i=0;i<n;i++){
            if(nums1[i]%2!=0) {
                oddmila=true;
                idx=i;
            }
        }
        vector<int> nums2(n);
        bool banpaya=false;
        if(oddmila and idx<n-1){
            for(int i=0;i<n;i++){
                if(nums1[i]%2==0){
                    for(int j=0;j<n;j++){
                        int a=nums1[i]-nums1[j];
                        if(a%2!=0){
                            nums2[i]=a;
                            banpaya=true;
                            break;
                        }
                    }
                    if(banpaya==false) {
                        ans=false;
                        break;
                    }
                }
                else nums2[i]=nums1[i];
            }
            if(banpaya==true) ans=true;
        }
        else if(oddmila and idx==n-1) ans=true;
        else ans=true;

        return ans;
    }
};