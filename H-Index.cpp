class Solution {
public:
    int hIndex(vector<int>& c) {
        int n = c.size();
        sort(c.begin(), c.end());

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int papers = n - i;

            if (c[i] >= papers) {
                ans = papers;
                break;
            }
        }

        return ans;
    }
};