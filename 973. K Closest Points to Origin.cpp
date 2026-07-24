class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>>pq;
        for(int i=0;i<points.size();i++){
            int x=points[i][0];
            int y=points[i][1];
            int dist_sq=x*x + y*y;
            pq.push({dist_sq,{x,y}});
            if(pq.size()>k)pq.pop();
        }
        vector<vector<int>>res;
        while(k--){
            if(!pq.empty()){
                res.push_back(pq.top().second);
                pq.pop();
            }
        }
        return res;
    }
};
