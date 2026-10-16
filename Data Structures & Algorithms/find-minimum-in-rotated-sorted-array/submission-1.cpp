class Solution {
public:
    int findMin(vector<int> &nums) {
        
    int l=0;
    int n =nums.size();
    int r = n-1;
    if(nums[0]<nums[r]){
        return nums[0];
    }

    while(l<r){
        int mid=l+(r-l)/2;

        if(nums[mid]>nums[r]){
            l=mid+1;
        }
        else{
            r=mid;
        }

    }
    return nums[l];
    }
};
