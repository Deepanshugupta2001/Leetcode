class Solution {
public:
    int countCommas(int n) {
        int ans=0,num=n;
        int ctr=0;
        while(num){
            ctr++;
            num/=10;
        }
        if(ctr>3 and ctr<7){
            ans=n-1000+1;
        }
        else if(ctr>6 and ctr<10){
            ans=n-1000000+1;
        }
        return ans;
    }
};