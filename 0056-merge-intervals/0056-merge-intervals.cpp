class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;

        if (intervals.empty()) return res;

        // Step 1: Sort intervals based on start time
        sort(intervals.begin(), intervals.end());

        // Step 2: Initialize start and end
        int start = intervals[0][0];
        int end = intervals[0][1];

        // Step 3: Traverse the intervals
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= end) {
                // Overlapping interval, update the end
                end = max(end, intervals[i][1]);
            } else {
                // No overlap, push the current interval and reset start/end
                res.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }

        // Step 4: Push the last interval
        res.push_back({start, end});

        return res;
    }
};
