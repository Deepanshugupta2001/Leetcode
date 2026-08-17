class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int n=grid.size();
        bool mila=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<grid[i].size();j++){
                if(i+1<n and grid[i][j]!=grid[i+1][j]){
                    mila=false;
                    break;
                }
                else if(j+1<grid[i].size() and grid[i][j]==grid[i][j+1]){
                    mila=false;
                    break;
                }
            }
        }
        return mila;
    }
};