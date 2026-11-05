class Solution {
public:
    vector<vector<int>> result;
    vector<int> current;

    void backtrack(vector<int>& nums, int index) {
        // Add the current subset to our answer
        result.push_back(current);

        // Try adding every remaining element
        for (int i = index; i < nums.size(); i++) {
            current.push_back(nums[i]);       // Make a choice
            backtrack(nums, i + 1);           // Explore
            current.pop_back();               // Undo the choice
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(nums, 0);
        return result;
    }
};