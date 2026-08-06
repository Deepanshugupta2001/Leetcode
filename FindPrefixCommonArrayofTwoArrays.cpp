class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int> ans(n);
        int p1[n],p2[n];
        for(int i=0;i<n;i++){
            p1[i]=A[i];
            p2[i]=B[i];
            // sort(p1,p1+i+1);
            // sort(p2,p2+i+1);
            bool mila=false;
            int x=0;
            // cout<<"p1 is"<<endl;
            // for(int k=0;k<n;k++){
            //     cout<<"k th is "<<p1[k]<<endl;
            //     cout<<"p2 is "<<p2[k]<<endl;
            // }
            // cout<<endl;
            for(int j=0;j<=i;j++){
                // cout<<p1[j]<<" : "<<p2[j]<<endl;
                for(int z=0;z<=i;z++){
                if(p1[j]==p2[z]) {
                    mila=true;
                    x++;
                }
                } 
            }
            // if(mila==false){
            //     ans.push_back(i+1);                
            // }
            // else ans.push_back(0);
            ans[i]=x;
        }
        return ans;
    }
};