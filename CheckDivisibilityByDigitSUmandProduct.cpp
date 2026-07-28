class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,prod=1;
        int no=n;
        while(n){
            int k=n%10;
            sum+=k;
            prod*=k;
            n=n/10;
        }
        int tsum=sum+prod;
        bool ans;
        if(no%tsum==0) ans=true;
        else ans=false;
        return ans;
    }
};