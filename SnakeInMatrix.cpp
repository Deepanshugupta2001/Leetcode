class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int c=commands.size();
        int grid[n][n];
        int m=0,o=0;
        grid[m][o]=0;
        for(int i=0;i<c;i++){
            if(commands[i]=="RIGHT") o++;
            else if(commands[i]=="DOWN") m++;
            else if(commands[i]=="LEFT") o--;
            else m--;
        }
        int ans=m*n+o;
        return ans;
    }
};