class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int l=0;
        bool fspacemila=false;
        bool fch=false;
        for(int i=n-1;i>=0;i--){
            if(fch==false and s[i]==' '){
                fspacemila=true;
            }
            else if(fch==true and s[i]==' ') break;
            else {
                fch=true;
                l++;
            }
        }
        return l;
    }
};