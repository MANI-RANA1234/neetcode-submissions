
class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] == target) {
                return mid;
            } 
            else if (nums[mid] < target) {
                l = mid + 1; // target is in the right half
            } 
            else {
                r = mid - 1; // target is in the left half
            }
        }

        return -1; // target not found
    }
};