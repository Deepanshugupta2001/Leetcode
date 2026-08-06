class Solution {
public:
    int smallestNumber(int n, int t) {
        int a=n;
        int prod=1;
        while(n){
            prod*=n%10;
            n=n/10;
        }
        if(prod%t==0) return a;
        else{
            int k=prod%t;
            int ans;
            for(int i=1;i<=k;i++){
                int v=a+i;
                int p=1;
                while(v){
                    p*=v%10;
                    v=v/10;
                }
                if(p%t==0) {
                    ans=a+i;
                    break;
                }
            }
            return ans;
        }
    }
};