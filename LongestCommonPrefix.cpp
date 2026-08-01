class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string a;
        for(int j=0;j<strs[0].size();j++){
            bool mila=true;
            for(int i=1;i<n;i++){
                
                if(strs[0][j]!=strs[i][j]) {
                    mila=false;
                    break;
                }
            }
            if(mila==false) {
                break; 
            }
            a+=strs[0][j];
        }
        return a;
    }
};