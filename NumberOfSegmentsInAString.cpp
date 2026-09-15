class Solution {
public:
    int countSegments(string s) {
        int ans=0;
        int n=s.size();
        if(n==0) return 0;
        char k=s[0];
        for(int i=1;i<n;i++){
            if(k!=' ' and s[i]==' ') ans++;
            else if(k!=' ' and s[i]!=' ') k=s[i];
            else if(k==' ') k=s[i];
        }
        if(s[n-1]!=' ') ans++;
        return ans;
    }
};