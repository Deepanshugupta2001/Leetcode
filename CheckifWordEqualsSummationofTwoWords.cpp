class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string ans1,ans2;
        for(int i=0;i<firstWord.size();i++){
            ans1+=(firstWord[i]-'a')+'0';
        }
        for(int j=0;j<secondWord.size();j++){
            ans2+=(secondWord[j]-'a')+'0';
        }
        string ans;
        for(int k=0;k<targetWord.size();k++){
            ans+=(targetWord[k]-'a')+'0';
        }
        cout<<"1: "<<ans1<<" 2: "<<ans2<<" 3: "<<ans<<endl;
        int a=stoi(ans1);
        int b=stoi(ans2);
        int c=stoi(ans);
        if(a+b==c) return true;
        return false;
    }
};