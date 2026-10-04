class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        int larr[n];
        larr[0] = 0;

        int rarr[n];
        rarr[n - 1] = 0;

        int water = 0;

        for (int i = 1; i < n; i++) {
            larr[i] = max(larr[i - 1], height[i - 1]);
        }

        for (int i = n - 2; i >= 0; i--) {
            rarr[i] = max(rarr[i + 1], height[i + 1]);
        }

        for (int i = 1; i < n; i++) {
            if (larr[i] > height[i] && rarr[i] > height[i]) {
                water = water + (min(larr[i], rarr[i]) - height[i]);
            }
        }
        return water;    
    }
};