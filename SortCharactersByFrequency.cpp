class Solution {
public:
    string frequencySort(string s) {
        int freq[256] = {};

        for (char ch : s) {
            freq[(unsigned char)ch]++;
        }

        string ans;

        for (int j = 0; j < 256; j++) {
            int maxi = 0;
            int idx = -1;

            for (int i = 0; i < 256; i++) {
                if (freq[i] > maxi) {
                    maxi = freq[i];
                    idx = i;
                }
            }

            if (idx == -1)
                break;

            while (maxi--) {
                ans += char(idx);
            }

            freq[idx] = 0;
        }

        return ans;
    }
};