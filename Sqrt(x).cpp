class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        long a=1LL*ans*ans;
        while(a<=x){
            ans++;
            a=1LL*ans*ans;
        }
        ans--;
        return ans;
    }
};