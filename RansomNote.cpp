class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int f1[26]={},f2[26]={};
        int n=ransomNote.size(),m=magazine.size();
        for(int i=0;i<n;i++){
            f1[ransomNote[i]-'a']++;
        }
        for(int i=0;i<m;i++){
            f2[magazine[i]-'a']++;
        }
        bool ans=true;
        for(int i=0;i<26;i++){
            if(f1[i]>f2[i]){
                ans=false;
                break;
            }
        }
        return ans;
    }
};