class Solution {
public:

    int cal(int n,vector<int>&vt){
        if(n==1) return 1;
        if(n==2) return 2;
        if(vt[n]!=-1) return vt[n];
        return vt[n]=cal(n-1,vt)+cal(n-2,vt);
    }
    int climbStairs(int n) {
        vector<int>vt(n+1,-1);
        return cal(n,vt);
    }

};
