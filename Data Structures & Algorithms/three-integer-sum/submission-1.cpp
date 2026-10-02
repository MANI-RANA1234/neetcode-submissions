#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> ans;
        
        // Sorting is required for the two-pointer approach
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < (int)nums.size() - 2; i++) {
            // Skip duplicate values for the first element
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int target = -nums[i];
            int l = i + 1;
            int r = nums.size() - 1;

            while (l < r) {
                int sum = nums[l] + nums[r];

                if (sum == target) {
                    ans.push_back({nums[i], nums[l], nums[r]});

                    // Skip duplicates for the second and third elements
                    while (l < r && nums[l] == nums[l + 1]) l++;
                    while (l < r && nums[r] == nums[r - 1]) r--;

                    l++;
                    r--;
                } 
                else if (sum > target) {
                    r--;
                } 
                else {
                    l++;
                }
            }
        }
        return ans;
    }
};