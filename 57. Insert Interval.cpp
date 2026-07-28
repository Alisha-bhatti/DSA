class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {

        vector<vector<int>> ans;

        for (auto interval : intervals) {

            // Current interval is before newInterval
            if (interval[1] < newInterval[0]) {
                ans.push_back(interval);
            }

            // Current interval is after newInterval
            else if (interval[0] > newInterval[1]) {
                ans.push_back(newInterval);
                newInterval = interval;
            }

            // Overlapping intervals
            else {
                newInterval[0] = min(newInterval[0], interval[0]);
                newInterval[1] = max(newInterval[1], interval[1]);
            }
        }

        ans.push_back(newInterval);

        return ans;
    }
};
