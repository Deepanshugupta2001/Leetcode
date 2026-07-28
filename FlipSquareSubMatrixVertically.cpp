class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int m=grid.size();
        int n=grid[0].size();
        if(k>1){
            // k=k/2;
            int l=k/2;
            cout<<"l is "<<l<<endl;
            while(l>0){
            int r=x+k-1;
            for(int i=x;i<x+k;i++){
                for(int j=y;j<y+k;j++){
                        swap(grid[i][j],grid[r][j]);
                }
                
                r--;
                l--;
                if(l<=0) break;
                cout<<"r is "<<r<<endl;
                cout<<"l is "<<l<<endl;
            }
            }
        }
        return grid;
    }
};