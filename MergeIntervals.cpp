class Solution {
public:
    static bool cmp(vector<int> a,vector<int> b){
        // if(a[1]==b[1]) return a[0]<b[0];     
        return a[0]<b[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& i) {
        int n=i.size();
        sort(i.begin(),i.end(),cmp);
        vector<vector<int>> ans;
        // bool mila=false;
        int start=i[0][0];
        int end=i[0][1];
        for(int j=1;j<n;j++){
            
            if(i[j][0]<=end){
                end=max(end,i[j][1]);
            }
            else{
                ans.push_back({start,end});
                start=i[j][0];
                end=i[j][1];
            }

        }
        ans.push_back({start,end});
        return ans;
    }
};