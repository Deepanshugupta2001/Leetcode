class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size(),ans=0;
        for(int i=0;i<n;i++){
            int f=(('z'-s[i]+1)*(i+1));
            ans+=f;
        }
        return ans;
    }
};