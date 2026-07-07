class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int rows=mat.size();
        int cols=mat[0].size();
        int sum=0;
        
        for(int i=0;i<rows;i++){
            sum+=mat[i][i];            //sum of diagnol
            sum+=mat[i][rows-i-1];     //sum of ant-diagnol
        }
       
        //remove middle element-counted twice

        if(cols%2==1)sum -= mat[cols/2][cols/2];
        return sum;
    }
};
