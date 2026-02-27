class Solution {
public:
    vector<int> bfs(vector<vector<int>> &adj) {
        int n = adj.size();              // number of nodes
        vector<int> vis(n, 0);           // visited array
        queue<int> q;
        vector<int> ans;

        vis[0] = 1;
        q.push(0);

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            ans.push_back(node);

            for (auto it : adj[node]) {
                if (!vis[it]) {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return ans;
    }
};
