class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);

        // last[d] = last position where digit d occurs
        vector<int> last(10, -1);

        for (int i = 0; i < s.size(); i++) {
            last[s[i] - '0'] = i;
        }

        // Try to improve digits from left to right
        for (int i = 0; i < s.size(); i++) {
            int curr = s[i] - '0';

            // Look for a larger digit
            for (int d = 9; d > curr; d--) {
                if (last[d] > i) {
                    swap(s[i], s[last[d]]);
                    return stoi(s);
                }
            }
        }

        return num;
    }
};