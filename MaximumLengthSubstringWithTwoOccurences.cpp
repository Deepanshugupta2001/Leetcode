class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        int maxSofar=0,cnt=0;
        // for(int i=0;i<n;i++){
        //     if(++f[s[i]-'a']<=2) {

        //         cnt++;
        //         maxSofar=max(maxSofar,cnt);
        //     }
        //     else{
        //         cnt=0;
        //         f[s[i]-'a']--;
        //     }
        // }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string ans=s.substr(i,j-i+1);
                int f[26]={};
                for(int m=0;m<ans.size();m++){
                    f[ans[m]-'a']++;
                }
                bool mila=true;
                for(int l=0;l<26;l++){
                    if(f[l]>2){
                        mila=false;
                        break;
                    }
                }
                if(mila==true){
                    maxSofar=max(maxSofar,j-i+1);
                }
            }
        }
        return maxSofar;
    }
};