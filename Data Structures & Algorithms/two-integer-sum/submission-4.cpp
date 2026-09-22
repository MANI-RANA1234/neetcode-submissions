class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector <pair<int,int>> nums1;

        for(int i = 0; i<nums.size();i++){
            nums1.push_back({nums[i],i});
        }
        
        sort(nums1.begin(),nums1.end());

        int i = 0, j = nums.size()-1;

        while(i<j){
            int current = nums1[i].first + nums1[j].first;
            if (current == target ){
                return {min(nums1[i].second, nums1[j].second),
                        max(nums1[i].second,nums1[j].second)};

            }
            else if (current> target){
                j--;
            }
            else{
                i++;
            }
        }
    return {};
    }
};
