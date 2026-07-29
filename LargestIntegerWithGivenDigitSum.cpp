class Solution {
public:
    int largestInteger(int n, int s) {
        int calc=9*n;
        int ans=0;
        if(calc<s) return -1;
        else{
            if(s>=9){
                int ctr=0;
                while(s and ctr<n){
                    if(s>=9) {
                        ans=ans*10+9;
                        s=s-9;
                        ctr++;
                        cout<<"first ma "<<ans<<" : "<<ctr<<endl;
                    }
                    else{
                        ans=ans*10+s;
                        s=0;
                        ctr++;
                        cout<<"Second ma ans"<<ans<<" : "<<ctr<<endl;
                    }
                }
                while(ctr<n){
                    ans=ans*10+0;
                    ctr++;
                    cout<<"ans is "<<ans<<": " <<ctr<<endl;
                    cout<<"Ma yaha par aaya hu"<<endl;
                }
            }
            else{
                int ctr=0;
                while(ctr<n){
                    if(s>0) {
                        ans=ans*10+s;
                        s=0;
                        ctr++;
                    }
                    else {
                        ans=ans*10+0;
                        ctr++;
                    }
                } 
            }
            return ans;
        }
    }
};