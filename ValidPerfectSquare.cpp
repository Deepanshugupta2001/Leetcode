class Solution {
public:
    bool isPerfectSquare(int num) {
        long ans=0;
        bool mila=false;
        if(num==1) return true;
        for(int i=0;i<num/2 +1;i++){
            if((1LL*ans*ans)>num) break;
            else if((1LL*ans*ans)<num) ans++;
            else if((1LL*ans*ans)==num){
                cout<<"Ma taga ";
                mila=true;
                break;
            }
        }
        return mila;
    }
};