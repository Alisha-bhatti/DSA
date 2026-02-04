class Solution {
  public:
    vector<int> snakePattern(vector<vector<int> > &matrix) {
        // code here
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<int>arr;
        for(int i=0;i<rows;i++){
            if(i%2==0){
                for(int j=0;j<cols;j++){
                    arr.push_back(matrix[i][j]);
                }
            }
            else{
                for(int j=cols-1;j>=0;j--){
                    arr.push_back(matrix[i][j]);
                }
            }
        }
        return arr;
    }
};
