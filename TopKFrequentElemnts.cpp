class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> freq(20001, 0);

        for(int x : nums) {
            freq[x + 10000]++;
        }

        vector<pair<int,int>> v;

        for(int i = 0; i < 20001; i++) {
            if(freq[i] > 0) {
                v.push_back({freq[i], i - 10000});
            }
        }

        sort(v.begin(), v.end(), greater<pair<int,int>>());

        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};