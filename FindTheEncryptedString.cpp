class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n=s.size();
        string ans;
        for(int i=0;i<n;i++){
            int v=(i+k)%n;
            char c=s[v];
            // ans[i]+=c;
            ans.push_back(c);
        }
        return ans;
    }
};