class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> a1(n),a2(n),ans(n);
        int i=0,j=0;
        a1[i++]=nums[0];
        a2[j++]=nums[1];
        for(int k=2;k<n;k++){
            if(a1[i-1]>a2[j-1]) {
                a1[i]=nums[k];
                i++;
            }
            else a2[j++]=nums[k];
        }
        for(int l=0;l<i;l++){
            ans[l]=a1[l];
            cout<<a1[l]<<endl;
        }
        cout<<endl;
        for(int e=0;e<a2.size();e++){
            cout<<a2[e]<<endl;
        }
        int p=a2.size();
        if(p>0){
            int z=0;
        for(int m=i;m<n;m++){
            ans[m]=a2[z++];
        }}
        return ans;
    }
};