class Solution {
public:
    bool scoreBalance(string s) {
        int n=s.size();
        bool ans=false;
        vector<int> psum(n),ssum(n);
        psum[0]=s[0]-'a'+1;
        for(int i=1;i<n;i++){
            psum[i]+=psum[i-1]+(s[i]-'a'+1);
        }
        ssum[n-1]=s[n-1]-'a'+1;
        for(int j=n-2;j>=0;j--){
            ssum[j]=ssum[j+1]+(s[j]-'a'+1);
        }
        for(int i=0;i<n-1;i++){
            if(psum[i]==ssum[i+1]){
                cout<<"psum is "<<psum[i]<<endl;
                cout<<"ssum is "<<ssum[i]<<endl;
                cout<<"i is "<<i<<endl;
                ans=true;
                break;
            }
        }
        return ans;
    }
};