class Solution {
public:
    int search(vector<int>& nums, int target) {
        
    int l=0;
    int n =nums.size();
    int r = n-1;
        while(l<r){
            int mid=l+(r-l)/2;

            if(nums[mid]>nums[r]){
                l=mid+1;
            }
            else{
                r=mid;
            }

        }
    int mid2 = l;
    int l1=0;
    int r1 = n-1;
    // if(nums[l1]<nums[r1]) return target-1;
    // while(l1<r1){

    //     mid2=l1+(r1-l1)/2;
        
    //     if(target==nums[mid2]){
    //         return mid2;
    //     }
    //     else if(target<nums[r1]){
    //         l1=mid2+1;
    //     }
    //     else{
    //         r1=mid2-1;
    //     }
    // }
    if(target>=nums[mid2] && target<=nums[n-1]){
        l1=mid2;
    }
    else{
        r1=mid2-1;
    }


        while (l1 <= r1) {
            int mid2 = l1 + (r1 - l1) / 2;

            if (nums[mid2] == target) {
                return mid2;
            } 
            else if (nums[mid2] < target) {
                l1 = mid2 + 1; // target is in the right half
            } 
            else {
                r1 = mid2 - 1; // target is in the left half
            }
        }

    return -1;

    }
};
