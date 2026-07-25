class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq;

        int idx = 0;

        // Push first k+1 elements
        for (int i = 0; i <= k && i < arr.size(); i++) {
            pq.push(arr[i]);
        }

        // Process remaining elements
        for (int i = k + 1; i < arr.size(); i++) {
            arr[idx++] = pq.top();
            pq.pop();

            pq.push(arr[i]);
        }

        // Empty the heap
        while (!pq.empty()) {
            arr[idx++] = pq.top();
            pq.pop();
        }
    }
};
