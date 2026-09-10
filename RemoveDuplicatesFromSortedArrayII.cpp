class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),ans=0,ctr=1,prev=nums[0];
        vector<int> a(n);
        int k=0;
        a[k]=prev;
        k++;
        ans++;
        for(int i=1;i<n;i++){
            if(nums[i]==prev and ctr<2){
                ans++;
                ctr++;
                a[k]=nums[i];
                k++;
            }
            else if(nums[i]==prev and ctr>=2){
                ctr++;
            }
            else if(nums[i]!=prev){
                ans++;
                a[k]=nums[i];
                k++;
                prev=nums[i];
                ctr=1;
            }
        }

        cout<<k<<endl;
        cout<<ans<<endl;
        for(int i=0;i<k;i++){
            nums[i]=a[i];
            cout<<a[i]<<endl;
        }
        return ans;
    }
};