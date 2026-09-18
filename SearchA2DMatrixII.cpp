class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        bool ans=false;
        for(int i=0;i<m;i++){
            int s=0,e=n-1;
            while(s<=e){
                int mid=s+(e-s)/2;
                if(target==matrix[i][mid]) {
                    ans=true;
                    break;
                }
                else if(target>matrix[i][mid]) s=mid+1;
                else e=mid-1;
            }
            if(ans==true) break;
        }
        return ans;
    }
};