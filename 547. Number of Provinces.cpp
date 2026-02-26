class Solution {
public:
    
    void dfs(int node, vector<vector<int>>& adjlis, vector<int>& vis){
        vis[node] = 1;

        for(auto it : adjlis[node]){
            if(!vis[it]){
                dfs(it, adjlis, vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        
        vector<vector<int>> adjlis(n);
        vector<int> vis(n, 0);

        // Convert matrix to adjacency list
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(isConnected[i][j] == 1 && i != j){
                    adjlis[i].push_back(j);
                }
            }
        }

        int provinces = 0;

        for(int i = 0; i < n; i++){
            if(!vis[i]){
                dfs(i, adjlis, vis);
                provinces++;
            }
        }

        return provinces;
    }
};
