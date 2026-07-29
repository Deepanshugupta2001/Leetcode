class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int freq[26]={};
        int n=s.size();
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        int xn=x-'a';
        int yn=y-'a';
        int st=yn;
        string ans;
        while(freq[yn]--){
            ans+=y;
        }
        for(int i=0;i<26;i++){

            if(i!=st and i!=xn and freq[i]!=0) {
                while(freq[i]--) ans+=i+'a';
            }
        }
        while(freq[xn]--) ans+=x;
        return ans;
    }
};