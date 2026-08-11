class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();

        int sum = nums[0];

        // Find sum of longest sequential prefix
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            }
            else {
                break;
            }
        }

        // Find the smallest integer >= sum
        // which is not present in nums
        int ans = sum;

        while (true) {
            bool mila = false;

            for (int i = 0; i < n; i++) {
                if (nums[i] == ans) {
                    mila = true;
                    break;
                }
            }

            if (mila == false) {
                break;
            }

            ans++;
        }

        return ans;
    }
};