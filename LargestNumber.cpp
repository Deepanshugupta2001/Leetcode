class Solution {
public:

    static bool cmp(string s1, string s2) {
        return s1 + s2 > s2 + s1;
    }

    string largestNumber(vector<int>& nums) {
        int n = nums.size();

        vector<string> ne(n);

        for(int i = 0; i < n; i++) {
            ne[i] = to_string(nums[i]);
        }

        sort(ne.begin(), ne.end(), cmp);

        string a = "";

        for(int i = 0; i < n; i++) {
            a += ne[i];
        }

        if(a[0] == '0')
            return "0";

        return a;
    }
};