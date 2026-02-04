class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
       
        vector<int>ans;

        int left=0;
        int right=c-1;
        int top=0;
        int bottom=r-1;
        while(left<=right && top<=bottom){
            // to push ele of top row
            for(int i=left;i<=right;i++){ 
                ans.push_back(mat[top][i]);
                
            }
            top++;
            // to push ele of rightmost col
            for(int i=top;i<=bottom;i++){
                ans.push_back(mat[i][right]);
                
                
            }
            right--;
            if(top<=bottom) {
                // pushing ele of bottom row
                for(int i=right;i>=left;i--){
                    ans.push_back(mat[bottom][i]);
                
                }
                bottom--;
            }
            
            
            
            // pushing ele of leftmost row
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
            
            
        }
        
        return ans;
    }
};
