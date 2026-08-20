class Solution {
public:
    bool isSubstringPresent(string s) {
        int n=s.size();
        vector<string> a1(n*n),a2(n*n);
        int m=0,z=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string str=s.substr(i,j-i+1);
                if(str.size()>=2) {
                    a1[m]=str;
                    m++;
                }
            }
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string str=s.substr(i,j-i+1);
                if(str.size()>=2) {
                    a2[z]=str;
                    z++;
                }
            }
        }
        // int x=a1.size(),y=a2.size();
        int i=0;
        bool ans=false;
        while(i<m){
            for(int k=0;k<z;k++){
                if(a1[i]==a2[k]){
                    ans=true;
                    break;
                }
            }
            i++;
        }
        return ans;
    }
};