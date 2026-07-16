class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> mx(n);
        mx[0]=nums[0];
        for(int i=1;i<n;i++){
            mx[i]=max(mx[i-1],nums[i]);
        }
        vector<int> pregcd(n);
        pregcd[0]=nums[0];
        for(int i=1;i<n;i++){
            pregcd[i]=gcd(nums[i],mx[i]);
        }
        sort(pregcd.begin(),pregcd.end());
        // for(int i=0;i<n;i++){
        //     cout<<"pregcd is "<<pregcd[i]<<endl;
        // }
        int j=0,k=n-1;
        long long sum=0;
        while(j<k){
            // cout<<"j is "<<pregcd[j]<<endl;
            // cout<<" k is "<<pregcd[k]<<endl;
            // int gc=1;
            // for(int m=1;m<=min(pregcd[j],pregcd[k]);m++){
            //     if(pregcd[j]%m==0 and pregcd[k]%m==0) gcd=m; 
            // }
            sum+=gcd(pregcd[j],pregcd[k]);
            // sum+=gc;
            j++;
            k--;
        }
        return sum;
    }
};