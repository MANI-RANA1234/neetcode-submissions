class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        int n = position.size();

        vector<pair<int, int>> cars;

        for (int i = 0; i < n; i++) {
            cars.push_back({position[i], speed[i]});
        }

        // Sort cars by position, closest to target first
        sort(cars.rbegin(), cars.rend());

        stack<double> st;

        for (int i = 0; i < n; i++) {

            // Calculate time to reach target
            double time = (double)(target - cars[i].first)
                          / cars[i].second;

            // If this car cannot catch the fleet ahead,
            // it creates a new fleet
            if (st.empty() || time > st.top()) {
                st.push(time);
            }
        }

        return st.size();
    }
};