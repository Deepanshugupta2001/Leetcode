class Solution {
public:
    int nearestDrone(vector<vector<int>>& d, vector<int>& target) {
        int n=d.size();
        int mini=INT_MAX;
        int idx=-1;
        for(int i=0;i<n;i++){
            int ans=abs(d[i][0]-target[0])+abs(d[i][1]-target[1]);
            if(ans<=d[i][2]){
                if(mini>ans){
                    mini=ans;
                    idx=i;
                }
            }
        }
        return idx;
    }
};