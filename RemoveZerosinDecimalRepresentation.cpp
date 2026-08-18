class Solution {
public:
    long long removeZeros(long long n) {
        long long ans=0;
        while(n){
            int k=n%10;
            n=n/10;

            if(k==0) continue;
            else ans=ans*10+k;
        }
        long long a=0;
        while(ans){
            int m=ans%10;
            a=a*10+m;
            ans=ans/10;
        }
        return a;
    }
};