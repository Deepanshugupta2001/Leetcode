class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //     int profit=0,price,j;
    //     int n=prices.size();
        
    //     for(int i=0;i<n-1;i++){
    //         int p=prices[i+1]-prices[i];
    //         if(p>profit) {
    //             profit=p;
    //             j=i;
    //         }
    //     }
    //     if(j>0 and j<n) return prices[j+1];
    //     else return 0;
    // }
    int n=prices.size();
    int minimum=INT_MAX,maximum=INT_MIN,minindex,maxindex;
    // for(int i=0;i<n;i++){
    //     if(prices[i]<minimum){
    //         minimum=prices[i];
    //         minindex=i;
    //     }
    //     if(prices[i]>maximum){
    //         maximum=prices[i];
    //         maxindex=i;
    //     }
    // }
    int ans=0;
    for(int i=0;i<n;i++){
        if(minimum>prices[i]){
            minimum=prices[i];
        }
        prices[i]=prices[i]-minimum;
        if(ans<prices[i]){
            ans=prices[i];
        }

    }
    return ans;
    }

};