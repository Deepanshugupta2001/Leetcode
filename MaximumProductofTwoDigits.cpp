class Solution {
public:
    int maxProduct(int n) {
        int max=INT_MIN,max2=INT_MIN;
        while(n){
            int k=n%10;
            if(max<=k){
                max2=max;
                max=k;
            }
            else if(max2<k){
                max2=k;
            }
            n=n/10;
        }
        int prod=1;
        prod=max*max2;
        return prod;
    }
};