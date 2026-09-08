class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        bool mila=false;

        for(int i=left;i<=right;i++){
            int k=i;
            mila=false;
            while(k){
                int m=k%10;
                if((m!=0 and i%m!=0)||(m==0)) {
                    mila=true;
                    break;
                }
                
                k/=10;
            }
            if(mila==false) ans.push_back(i);
        }
        return ans;
    }
};