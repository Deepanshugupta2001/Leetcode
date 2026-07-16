class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n=details.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int a=0;
            a=(details[i][11]-'0')*10;
            a+=details[i][12]-'0';
            if(a>60) ans++;
        }
        return ans;
    }
};