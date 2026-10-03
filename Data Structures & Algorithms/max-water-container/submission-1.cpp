class Solution {
public:
    int maxArea(vector<int>& heights) {
        
       int r = heights.size()-1;
        int l = 0;
        int maxs=0;
        int currmaxh;
        int breadth;
        while(l<r){
            breadth = abs(r-l);
            currmaxh = min(heights[l],heights[r]);
            maxs = max(maxs,(currmaxh*breadth)); 

            if (heights[l]<heights[r]){
                l++;
            }
            else {
                r--;
            }
        }
    return maxs;
    }
};
