class Solution {
public:
    int countDigits(int num) {
        int f[10]={};
        int n=num;
        while(n){
            int k=n%10;
            f[k]++;
            n=n/10;
        }
        int ans=0,ne=num;
        while(num){
            int k=num%10;
            if(ne%k==0){ ans+=f[k];
            f[k]=0;
            }
            num=num/10;
        }
        return ans;
    }
};