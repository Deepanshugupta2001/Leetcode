class Solution {
public:
    bool isAnagram(string &s1, string &s2) {
        if (s1.size() != s2.size())
            return false;

        int freq[26] = {};

        for (char c : s1)
            freq[c - 'a']++;

        for (char c : s2)
            freq[c - 'a']--;

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0)
                return false;
        }

        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        vector<vector<string>> ans;
        vector<bool> used(n, false);

        for (int i = 0; i < n; i++) {

            if (used[i])
                continue;

            vector<string> a;

            a.push_back(strs[i]);
            used[i] = true;

            for (int j = i + 1; j < n; j++) {

                if (!used[j] && isAnagram(strs[i], strs[j])) {
                    a.push_back(strs[j]);
                    used[j] = true;
                }
            }

            ans.push_back(a);
        }

        return ans;
    }
};