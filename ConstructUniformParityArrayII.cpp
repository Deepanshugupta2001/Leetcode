class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size(),k=INT_MAX,m=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums1[i]%2!=0){
                k=min(k,nums1[i]);
            }
            else m=min(m,nums1[i]);
        }
        if(k!=INT_MAX and m<k ) return false;

        return true;
    }
};