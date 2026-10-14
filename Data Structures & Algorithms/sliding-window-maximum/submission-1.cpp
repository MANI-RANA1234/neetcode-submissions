class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        vector<int> ans;
        deque<int> dq;

        int left = 0;

        for (int right = 0; right < nums.size(); right++) {

            // Step 1: Remove indices outside the window
            if (!dq.empty() && dq.front() < left) {
                dq.pop_front();
            }

            // Step 2: Remove smaller elements from the back
            while (!dq.empty() && nums[dq.back()] <= nums[right]) {
                dq.pop_back();
            }

            // Step 3: Add current index
            dq.push_back(right);

            // Step 4: If window size is k, record maximum
            if (right - left + 1 == k) {
                ans.push_back(nums[dq.front()]);

                // Step 5: Slide the window
                left++;
            }
        }

        return ans;
    }
};