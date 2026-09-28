class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = n - 1;

        string ans = "";

        while (i >= 0) {

            // Skip spaces
            while (i >= 0 && s[i] == ' ') {
                i--;
            }

            // No more words
            if (i < 0) {
                break;
            }

            // Find the end of the current word
            int e = i;

            // Move to the beginning of the word
            while (i >= 0 && s[i] != ' ') {
                i--;
            }

            int st = i + 1;

            // Add space between words
            if (!ans.empty()) {
                ans += ' ';
            }

            // Add current word
            for (int j = st; j <= e; j++) {
                ans += s[j];
            }
        }

        return ans;
    }
};