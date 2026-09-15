class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;

        for (int i = 0; i < n; ) {
            char ch = chars[i];
            int cnt = 0;

            while (i < n && chars[i] == ch) {
                i++;
                cnt++;
            }

            // Write the character
            chars[idx++] = ch;

            // Write count if greater than 1
            if (cnt > 1) {
                string s = to_string(cnt);

                for (char c : s) {
                    chars[idx++] = c;
                }
            }
        }

        return idx;
    }
};