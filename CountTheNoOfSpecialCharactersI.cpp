class Solution {
public:
    int numberOfSpecialChars(string word) {
        int cap[26]={};
        int sm[26]={};
        int n=word.size();
        for(int i=0;i<n;i++){
            if(word[i]>='A' and word[i]<='Z'){
                cap[word[i]-'A']++;
            }
            else if(word[i]>='a' and word[i]<='z'){
                sm[word[i]-'a']++;
            }
        }
        int ans=0;
        for(int i=0;i<26;i++){
            // cout<<i<<" is "<<sm[i]<<" and capital is "<<cap[i]<<endl;
            if(sm[i]!=0 and cap[i]!=0) ans++;
        }
        return ans;
    }
};