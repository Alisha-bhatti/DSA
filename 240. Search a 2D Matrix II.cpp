class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();

        // .........BRUTE FORCE........

        // for(int i=0;i<rows;i++){
        //     for(int j=0;j<cols;j++){
        //         if(matrix[i][j]==target) return true;
        //     }
        // }
        // return false;

        // ..........BINARY SEARCH..........
        
        int i = 0;
        int j = cols-1;

        while(i < rows && j >= 0){

            if(matrix[i][j] == target)
                return true;

            else if(matrix[i][j] > target)
                j--;

            else
                i++;
        }

        return false;
    }
};
