class Solution {
public:
    int countAsterisks(string s) {
        int n=s.size(),ans=0;
        bool mila=false;
        for(int i=0;i<n;i++){
            if(s[i]=='|' and mila==false){
                mila=true;
            }
            else if(s[i]=='|' and mila==true){
                mila=false;
            }
            else if(mila==false and s[i]=='*') ans++;
        }
        return ans;
    }
};