class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     int n=nums.size();
     int cnt=0;
     int total=0;
     for(int i=0;i<n;i++){
        if(nums[i]==1) {
            cnt++;
            total=max(cnt,total);
        }
        else cnt=0;
     }
     return total;
    }
};
