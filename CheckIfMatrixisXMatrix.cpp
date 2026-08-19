class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        bool mila=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j and grid[i][j]==0){
                    mila=true;
                    break;
                }
                else if(i+j == n-1 and grid[i][j]==0){
                    mila=true;
                    break;                    
                }
                else if(i!=j and (i+j)!=n-1 and grid[i][j]!=0)
                {
                    mila=true;
                    break;
                }
            }
        }
        if(mila==true) return false;
        else return true;
    }
};