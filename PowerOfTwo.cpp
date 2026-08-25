class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        else if(n==0) return false;
        else{
            bool mila=true;
            while(n){
                if(n==1) break;
                int k=n%2;
                if(k!=0){
                    mila=false;
                    break;
                }
                n=n/2;
            }
            return mila;
        }
    }
};