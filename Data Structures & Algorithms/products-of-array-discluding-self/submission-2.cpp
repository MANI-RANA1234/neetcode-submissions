class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
int n = nums.size();
        
        vector<int> lprod(n, 1);
        vector<int> rprod(n, 1);
        vector<int> res(n, 1);

        // Calculate left prefix products
        for (int i = 1; i < n; i++) {
            lprod[i] = lprod[i - 1] * nums[i - 1];
        }

        // Calculate right suffix products
        for (int i = n - 2; i >= 0; i--) {
            rprod[i] = rprod[i + 1] * nums[i + 1];
        }

        // Multiply prefix and suffix products
        for (int i = 0; i < n; i++) {
            res[i] = lprod[i] * rprod[i];
        }

        return res;
    }
};
