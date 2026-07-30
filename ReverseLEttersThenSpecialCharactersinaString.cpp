class Solution {
public:
    string reverseByType(string s) {
        int n=s.size();
        string sp,nor;
        if(n==1) return s;
        else{
        for(int i=0;i<n;i++){
            if(s[i]>='a' and s[i]<='z') nor+=s[i];
            else sp+=s[i];
        }
        reverse(nor.begin(),nor.end());
        reverse(sp.begin(),sp.end());
        cout<<"nor is "<<nor<<endl;
        cout<<"sp is "<<sp<<endl;
        int j=0,k=0;
        for(int i=0;i<n;i++){
            if(s[i]>='a' and s[i]<='z'){
                s[i]=nor[j];
                cout<<"nor[j] is "<<nor[j]<<endl;
                j++;
                cout<<"s is "<<s<<endl;
                cout<<"j is "<<j<<endl;
            }
            else {
                s[i]=sp[k];
                k++;
            }
        }
        return s;}
    }
};