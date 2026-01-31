class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int it:nums){
            mp[it]=mp[it]+1;
        }
        int maxfreq=0;
        for(auto it:mp){
            if(it.second>maxfreq)maxfreq=it.second;
        }
        int ans=0;
        for(auto it:mp){
            if (it.second==maxfreq){
                ans+=it.second;
            }
        }
        return ans;
    }
};
