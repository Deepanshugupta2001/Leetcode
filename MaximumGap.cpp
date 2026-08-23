class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();

        if (n < 2)
            return 0;

        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        if (mn == mx)
            return 0;

        // Minimum possible maximum gap
        int gap = (mx - mn + n - 2) / (n - 1);

        int bucketCount = (mx - mn) / gap + 1;

        vector<int> bucketMin(bucketCount, INT_MAX);
        vector<int> bucketMax(bucketCount, INT_MIN);
        vector<bool> used(bucketCount, false);

        // Put every number into a bucket
        for (int x : nums) {
            int index = (x - mn) / gap;

            bucketMin[index] = min(bucketMin[index], x);
            bucketMax[index] = max(bucketMax[index], x);
            used[index] = true;
        }

        int ans = 0;
        int previousMax = mn;

        // Compare adjacent non-empty buckets
        for (int i = 0; i < bucketCount; i++) {
            if (!used[i])
                continue;

            ans = max(ans, bucketMin[i] - previousMax);

            previousMax = bucketMax[i];
        }

        return ans;
    }
};