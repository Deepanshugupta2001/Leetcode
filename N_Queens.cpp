class Solution {
public:
    vector<string> placeQueen(vector<string> curr, int rowNo, int ind, int n) {
        for (int i = ind + 1; i < n; i++) {
            curr[rowNo][i] = '.';
        }

        for (int i = rowNo + 1; i < n; i++) {
            curr[i][ind] = '.';
        }

        int a = rowNo + 1, b = ind - 1;
        while (a < n && b >= 0) {
            curr[a][b] = '.';
            a++; b--;
        }

        a = rowNo + 1, b = ind + 1;
        while (a < n && b < n) {
            curr[a][b] = '.';
            a++; b++;
        }

        curr[rowNo][ind] = 'Q';     // place the queen

        return curr;
    }

    void solve(vector<vector<string>>& solutions, vector<string>& curr, int rowNo, int n) {
        if (rowNo == n) {
            solutions.push_back(curr);
            return;
        }

        for (int ind = 0; ind < n; ind++) {
            if (curr[rowNo][ind] == '.') continue;

            vector<string> queenPlacedGrid = placeQueen(curr, rowNo, ind, n);

            solve(solutions, queenPlacedGrid, rowNo + 1, n);

            curr[rowNo][ind] = '.'; 
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> solutions;

        vector<string> curr(n);
        string s(n, '_');
        for (int i = 0; i < n; i++) {
            curr[i] = s;
        }

        solve(solutions, curr, 0, n);

        return solutions;
    }
};