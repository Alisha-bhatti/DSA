class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        auto first=lower_bound(arr.begin(),arr.end(),target);
        auto last=upper_bound(arr.begin(),arr.end(),target);
        return last-first;
    }
};
