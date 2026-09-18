class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> track;
        for (int num : nums) {
            if (track.count(num)) {
                return true;
            }
            track.insert(num);
        }
        return false;
    }
};