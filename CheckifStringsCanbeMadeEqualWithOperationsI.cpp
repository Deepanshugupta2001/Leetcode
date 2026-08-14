class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int f1[26]={};
        int f2[26]={};
        for(int i=0;i<4;i++){
            f1[s1[i]-'a']++;
            f2[s2[i]-'a']++;
        }
        bool mila=true;
        for(int i=0;i<26;i++){
            if(f1[i]!=f2[i]) {
                mila=false;
                break;
            }
        }
        if(mila==true){
            if(s1[0]!=s2[0] and s1[0]!=s2[2]) mila=false;
            else if(s1[1]!=s2[1] and s1[1]!=s2[3]) mila=false;
            else if(s1[2]!=s2[2] and s1[2]!=s2[0]) mila=false;
            else if(s1[3]!=s2[3] and s1[3]!=s2[1]) mila =false;
        }
        return mila;
    }
};