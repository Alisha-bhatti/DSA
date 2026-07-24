class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
    int n=score.size();
    for(int i=0;i<n;i++){
      pq.push({score[i],i});
    }
    int rank=1;
    vector<string>res(n);
    while(!pq.empty()){
      auto top=pq.top();
      pq.pop();
      int score=top.first;
      int scoreIdx=top.second;
      if(rank==1)res[scoreIdx]="Gold Medal";
      else if(rank==2)res[scoreIdx]="Silver Medal";
      else if(rank==3)res[scoreIdx]="Bronze Medal";
      else res[scoreIdx]=to_string(rank);
      rank++;
   }
  return res;
    }
};
