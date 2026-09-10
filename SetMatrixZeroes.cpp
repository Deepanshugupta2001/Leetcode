class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        set<int> r,c;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        for(int x: r){
            for(int j=0;j<m;j++){
                matrix[x][j]=0;
            }
        }
        for(int y: c){
            for(int i=0;i<n;i++){
                matrix[i][y]=0;
            }
        }
    }
};