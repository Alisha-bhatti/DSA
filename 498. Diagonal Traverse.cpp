class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();      // no of rows
        int n=mat[0].size();    // no of cols
        int row=0,col=0;
        vector<int>ans;
        
        for(int i=0;i<m*n;i++){
            ans.push_back(mat[row][col]);
            int sum=row+col;
            if(sum%2==0){
                //moving upright
                if(col==n-1) row++;
                else if(row==0) col++;
                else{
                    row--;
                    col++;
                }
            }
            else{
                if(row==m-1) col++;
                else if(col==0) row++;
                else{
                    row++;
                    col--;
                }
            }
        }
        return ans;
    }
};
