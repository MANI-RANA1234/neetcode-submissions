class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int count = 1;
        int maxlen=1;
        for (int i = 0; i + 1 < nums.size(); i++){
            if (nums[i+1]==nums[i]+1){
                count++;
                maxlen = max(maxlen,count);
            }
            else if (nums[i+1]==nums[i]){
            }
            else {
                count = 1;
            }
        }
        return maxlen;
    }
};
