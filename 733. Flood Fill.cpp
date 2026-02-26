class Solution {
public:

    vector<vector<int>>dir = {{-1,0},{0,1},{1,0},{0,-1}};
    void dfs(vector<vector<int>>& image, int sr, int sc, int color,int val){
        int r  = image.size();
        int c  = image[0].size();
        if(sr<0 || sc <0 || sr>=r || sc>=c || image[sr][sc]!=val) return ;
        image[sr][sc] = color;
        for(auto ele : dir){
            int newR = ele[0] + sr;
            int newC = ele[1] + sc;
            dfs(image,newR,newC,color,val);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color) return image;
     dfs(image,sr,sc,color,image[sr][sc]);
     return image;
    }
};
