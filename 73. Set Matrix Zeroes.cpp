class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        bool firstRowZero=false, firstColZero=false;
        for(int i=0;i<n;i++){
            if(matrix[0][i]==0) firstRowZero=true;
        }
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0) firstColZero=true;
        }
        //storing zeros row,col in first row and col
        for(int r=1;r<m;r++){
            for(int c=1;c<n;c++){
                if(matrix[r][c]==0){
                    matrix[0][c]=0;
                    matrix[r][0]=0;
                }
            }
        }
        //

        for(int r=1;r<m;r++){
            for(int c=1;c<n;c++){
                if(matrix[r][0]==0 || matrix[0][c]==0){
                    matrix[r][c]=0;
                }
            }
        }

        // make first row and col zero

        if(firstRowZero){
            for(int i=0;i<n;i++) matrix[0][i]=0;
        }
        if(firstColZero){
            for(int i=0;i<m;i++) matrix[i][0]=0;
        }






        // vector<bool>zeroRows(m,false);
        // vector<bool>zeroCols(n,false);
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(matrix[i][j]==0){
        //             zeroRows[i]=true;
        //             zeroCols[j]=true;
        //         }
        //     }
        // }
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(zeroRows[i] || zeroCols[j]){
        //             matrix[i][j]=0;
        //         }
        //     }
        // }
    }
};
