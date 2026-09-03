class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        vector<int> ans;
        vector<int> a(n);

        int ctr = 1;
        int prev = nums[0];
        int k = 0;
        int cnt = 0;

        if(n < 3) {
            if(n == 1) {
                ans = nums;
            }
            else {
                if(nums[0] == nums[1])
                    ans.push_back(nums[0]);
                else
                    ans = nums;
            }
        }
        else {

            for(int i = 1; i < n; i++) {

                if(nums[i] == prev) {
                    ctr++;
                }
                else {

                    if(ctr > n / 3) {
                        a[k++] = prev;
                        cnt++;
                    }

                    prev = nums[i];
                    ctr = 1;
                }
            }

            if(ctr > n / 3) {
                a[k++] = prev;
                cnt++;
            }

            for(int i = 0; i < cnt; i++) {
                ans.push_back(a[i]);
            }
        }

        return ans;
    }
};