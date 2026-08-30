class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int s = 0, e = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] < nums[s])
                s = i;

            if(nums[i] > nums[e])
                e = i;
        }

        int option1 = max(s, e) + 1;
        int option2 = n - min(s, e);
        int option3 = (s + 1) + (n - e);
        int option4 = (e + 1) + (n - s);

        return min({option1, option2, option3, option4});
    }
};