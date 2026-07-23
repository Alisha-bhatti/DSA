class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;

        if(nums1.empty() || nums2.empty() || k == 0)
            return ans;

        // {sum, {i, j}}
        using T = pair<int, pair<int,int>>;

        priority_queue<T, vector<T>, greater<T>> pq;

        // push first element of each row
        for(int i = 0; i < min((int)nums1.size(), k); i++) {
            pq.push({nums1[i] + nums2[0], {i, 0}});
        }

        while(k-- && !pq.empty()) {

            auto top = pq.top();
            pq.pop();

            int i = top.second.first;
            int j = top.second.second;

            ans.push_back({nums1[i], nums2[j]});

            // push next element in same row
            if(j + 1 < nums2.size()) {
                pq.push({nums1[i] + nums2[j + 1], {i, j + 1}});
            }
        }

        return ans;
    }
};
