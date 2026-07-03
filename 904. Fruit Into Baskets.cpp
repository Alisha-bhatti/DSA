class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        unordered_map<int,int>mp;
        int st=0,maxfruits=0;
        for(int end=0;end<n;end++){
            mp[fruits[end]]++;
            if(mp.size()>2){
                mp[fruits[st]]--;
                if(!mp[fruits[st]])mp.erase(fruits[st]);
                st++;
            }
            // mp[fruits[end]]++;
            maxfruits=max(maxfruits,end-st+1);
        }
    return maxfruits;
    }
};
